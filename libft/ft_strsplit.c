/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:09:42 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/18 11:10:08 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strndup(const char *s, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n + 1);
	if (tmp == NULL)
		return (NULL);
	tmp = ft_strncpy(tmp, s, n);
	tmp[n] = '\0';
	return (tmp);
}

static int	ft_word_count(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**tmp;

	i = 0;
	y = 0;
	tmp = (char **)malloc(sizeof(char *) * (ft_word_count(s, c)) + 1);
	if (tmp == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		x = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > x)
		{
			tmp[y] = ft_strndup(s + x, i - x);
			y++;
		}
	}
	tmp[y] = NULL;
	return (tmp);
}
