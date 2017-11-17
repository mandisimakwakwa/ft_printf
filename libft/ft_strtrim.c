/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:06:11 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/18 11:10:45 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	end;
	unsigned int	start;
	char			*tmp;

	i = 0;
	start = 0;
	while (ft_isesc(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	end = ft_strlen(s) - 1;
	while (ft_isesc(s[i]))
		end--;
	tmp = (char *)malloc(sizeof(char) * (end - i + 2));
	if (tmp == NULL)
		return (NULL);
	while (start < end - i + 1)
	{
		tmp[start] = s[i + start];
		start++;
	}
	tmp[start] = '\0';
	return (tmp);
}
