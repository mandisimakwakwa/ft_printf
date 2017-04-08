#include "libft.h"

char	*ft_wchrstr(wchar_t *src, char *dst, size_t dstLen)
{
	size_t	i;
	wchar_t	currentChar;

	i = 0;
	while (src[i] != '\0' && i < (dstLen - 1))
	{
		currentChar = src[i];
		if (currentChar < 128)
			dst[i] = (char)currentChar;
		else
		{
			dst[i] = '?';
			if (currentChar >= 0xD800 && currentChar <= 0xD8FF)
				i++;
		}
		i++;
	}
	dst[i] = '\0';
	return dst;
}
