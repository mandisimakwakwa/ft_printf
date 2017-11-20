# include "ft_printf.h"

int     ft_skip(char *format, int i)
{
    while (!ft_isalpha(format[i]))
        i++;
    return i;
}

void	ft_fill(int fillCount, char c)
{
    int	i;

    i = 0;
    while (i <= fillCount)
    {
        ft_putchar(c);
        i++;
    }
}

void    ft_o_support(int o, int param, char flag, char f_addon)
{
    if (flag == '+' && param > 0)
        ft_fill(param - ft_nbrlen(o), ' ');
    if (flag == '0' && param > 0)
        ft_fill(param - ft_nbrlen(o), '0');
    if (flag == '#')
    {
        if (f_addon == '+' && param > 0)
            ft_fill(param - ft_nbrlen(o), ' ');
        ft_putchar('0');
    }
    ft_putoctal(o);
    if (flag == '#' && f_addon == '-')
        ft_fill(param - ft_nbrlen(o), ' ');
    if (flag == '-' && param > 0)
        ft_fill(param - ft_nbrlen(o), ' ');
}

void    ft_c_support(char c, int param, char flag, char f_addon)
{
    if (param > 0 && !flag)
        ft_fill(param - 1, ' ');
    ft_putchar(c);
    if (f_addon == '-' && flag == '+')
        ft_fill(param - 1, ' ');
}
