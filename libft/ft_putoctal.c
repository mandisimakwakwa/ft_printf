#include "libft.h"

void	ft_putoctal(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putoctal(n / 8);
		ft_putoctal(n % 8);
	}
	else
		ft_putchar(n + '0');
}
