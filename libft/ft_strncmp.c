/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 18:54:45 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/09 08:13:00 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*my_s1;
	char	*my_s2;

	i = 0;
	my_s1 = (char *)s1;
	my_s2 = (char *)s2;
	while (i < n)
	{
		if (my_s1[i] == '\0' && my_s2 == '\0')
			return (0);
		if (my_s1[i] != my_s2[i])
			return (my_s1[i] - my_s2[i]);
		i++;
	}
	return (0);
}
