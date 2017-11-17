/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 11:42:58 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/08 12:31:22 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		delim;
	size_t		res;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	delim = i;
	while (src[i - delim] && i < (size - 1))
	{
		dst[i] = src[i - delim];
		i++;
	}
	if (delim < size)
		dst[i] = '\0';
	res = delim + ft_strlen(src);
	return (res);
}
