#include "ft_printf.h"

int     ft_checkMod(char *format)
{
    int modPos;

    modPos = ft_chrpos(format, '%');
    if (format[modPos + 1] == '%' && format[modPos] == '%')
        return 2;
    else if (modPos == -1)
        return -1;
    else if (modPos == 0 || format[0] == '%')
        return 1;
    else if (modPos > 0)
        return 1;
    else
        return 0;
}

void    ft_mod(char *format)
{
    int i;

    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '%')
                ft_putchar(format[i++]);
        }
        ft_putchar(format[i]);
        i++;
    }
}