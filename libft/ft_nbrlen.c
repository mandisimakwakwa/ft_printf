#include "libft.h"

size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}
