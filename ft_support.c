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
