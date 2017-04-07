# include "libft.h"

int		ft_chrpos(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if ((int)s[i] == c)
			return (i);
		i++;
	}
	return (0);
}
