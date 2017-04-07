/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:47:49 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/15 12:06:27 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	tmp = ft_memalloc(ft_strlen(s1) + ft_strlen(s2));
	if (tmp == NULL)
		return (NULL);
	tmp = ft_strcat((char *)s1, s2);
	tmp[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0';
	return (tmp);
}
