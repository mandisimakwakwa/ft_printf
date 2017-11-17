#include "ft_printf.h"

void	ft_d(va_list ap, char *format, char flag)
{
    int     param;
    int     d;

    param = ft_getParam(format, flag) - 1;
    d = va_arg(ap, int);
    if (param && flag == '\0')
        ft_fill(param - ft_nbrlen(d), ' ');
    if (flag)
    {
        ft_plusFlag(d, flag, param, format);
        ft_minusFlag(d, flag);
        ft_spaceFlag(d, flag, param);
        ft_zeroFlag(d, flag);
    }
    else
        ft_putnbr(d);
}

void	ft_i()
{}

void	ft_o()
{}

void	ft_u(va_list ap, char *format, char flag)
{
    unsigned int	u;
    int				param;
    int             u_length;

    u = va_arg(ap, unsigned int);
    param = ft_getParam(format, flag) - 1;
    u_length = ft_nbrlen(u);
    if (flag == '0')
        ft_fill((param - u_length), flag);
    if (flag == '.')
        ft_fill((param - u_length), '0');
    if (param)
        ft_fill(param - u_length, ' ');
    ft_putunsigned(u);
}