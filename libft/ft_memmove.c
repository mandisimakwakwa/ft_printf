/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:57:41 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/11 17:26:45 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (len != 0)
	{
		i = 0;
		while (i < len || (i < ft_strlen(dst)))
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
