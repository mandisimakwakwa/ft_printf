#include "libft.h"

void	ft_putnbr_endl(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	ft_putchar(10);
}
