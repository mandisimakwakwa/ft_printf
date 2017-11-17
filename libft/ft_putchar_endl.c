#include "libft.h"
#include <unistd.h>

void	ft_putchar_endl(char c)
{
	write(1, &c, 1);
	ft_putchar(10);
}
