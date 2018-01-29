/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:09:53 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/12/06 18:12:09 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wchrstr(wchar_t *src, char *dst, size_t dstlen)
{
	size_t	i;
	wchar_t	currentchar;

	i = 0;
	while (src[i] != '\0' && i < (dstlen - 1))
	{
		currentchar = src[i];
		if (currentchar < 128)
			dst[i] = (char)currentchar;
		else
		{
			dst[i] = '?';
			if (currentchar >= 0xD800 && currentchar <= 0xD8FF)
				i++;
		}
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
