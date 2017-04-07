/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 15:56:44 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/08 17:38:34 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	track;
	size_t	length;

	i = 0;
	track = 0;
	length = ft_strlen(little);
	if (length == 0)
		return (char *)big;
	while (big[i] && len >= length)
	{
		while (little[track] == big[i + track])
		{
			if (track == (length - 1))
				return ((char *)big + i);
			track++;
		}
		track = 0;
		i++;
		len--;
	}
	return (NULL);
}
