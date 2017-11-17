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
        ft_x(ap, format, specif);
    else if (specif == 'd' || specif == 'D')
        ft_d(ap, format, flag);
    else if (specif == 'i')
        ft_i(ap, format, flag);
    else if (specif == 'o' || specif == 'O')
        ft_o(ap, format, flag);
    else if (specif == 'u' || specif == 'U')
        ft_u(ap, format, flag);
}

void	ft_c()
{}

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
        if (param > 0 && !flag)
            ft_fill(param - s_length, ' ');
        if (s)
            ft_putstr(s);
    }
}

void	ft_p()
{}

void	ft_x()
{}