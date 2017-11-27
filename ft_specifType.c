#include "ft_printf.h"

void    ft_specifTypeIni(char *format, char specif, char flag, va_list ap)
{
    if (specif == 'c' || specif == 'C')
        ft_c(ap, format, flag);
    else if (specif == 's' || specif == 'S')
        ft_s(ap, format, flag);
    else if (specif == 'p')
        ft_p(ap);
    else if (specif == 'x' || specif == 'X')
        ft_x(ap, format, flag);
    else if (specif == 'd' || specif == 'D')
        ft_d(ap, format, flag);
    else if (specif == 'i')
        ft_i(ap, format, flag);
    else if (specif == 'o' || specif == 'O')
        ft_o(ap, format, flag);
    else if (specif == 'u' || specif == 'U')
        ft_u(ap, format, flag);
}

void	ft_c(va_list ap, char *format, char flag)
{
    char    c;
    char    f_addon;
    char    *tmp;
    int     param;
    int     p_addon;

    c = (char)va_arg(ap, int);
    f_addon = format[ft_chrpos(format, flag) + 1];
    tmp = ft_strsub(format, ft_chrpos(format, f_addon), ft_strlen(format) - 2);
    param = ft_getParam(format, flag) - 1;
    p_addon = ft_getParam(tmp, flag) - 1;
    if (flag == '+' && f_addon != '-')
        ft_fill(param - 1, ' ');
    if (flag == '0' && f_addon != '+')
        ft_fill(param - 1, ' ');
    if (f_addon == '+' && flag == '0')
        ft_fill(p_addon - 1, ' ');
    if (c)
        ft_c_support(c, param, flag, f_addon);
}

void	ft_s(va_list ap, char *format, char flag)
{
    char    *s;
    int     param;
    int     s_length;

    s = va_arg(ap, char*);
    if (s == NULL && flag == '\0')
        ft_putstr("(null)");
    else
    {
        param = ft_getParam(format, flag) - 1;
        s_length = ft_strlen(s);
        if (ft_strcmp(s, "") == 0 && !flag)
            ft_putstr("");
        if (param > 0 && (flag == ' ' || flag == '+'))
            ft_fill(param - s_length, ' ');
        if (s)
        {
            if (param > 0 && !flag)
                ft_fill(param - s_length, ' ');
            ft_putstr(s);
            if (flag == '-')
                ft_fill(param - s_length, ' ');
        }
    }
}

void	ft_p(va_list ap)
{
    int	nbr;

    nbr = va_arg(ap, int);
    ft_putstr("0x");
    ft_puthex(nbr);
}

void	ft_x(va_list ap, char *format, char flag)
{
    int     x;
    int     param;

    x = va_arg(ap, int);
    param = ft_getParam(format, flag);
    if (flag == '#' && !ft_strchr(format, 'X'))
        ft_putstr("0x");
    if (flag == '#' && ft_strchr(format, 'X'))
        ft_putstr("0X");
    if (x && ft_strchr(format, 'X'))
        ft_putstr(ft_itoa_base(x, 16));
    if (x && !param && !ft_strchr(format, 'X'))
        ft_puthex(x);
}