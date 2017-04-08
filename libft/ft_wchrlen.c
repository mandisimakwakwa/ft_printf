#include "libft.h"

size_t	ft_wchrlen(wchar_t *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
