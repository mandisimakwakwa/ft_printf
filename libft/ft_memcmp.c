/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 11:31:03 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/08 08:14:44 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	i = 0;
	if (my_s1 == NULL && my_s2 == NULL)
		return (0);
	while (my_s1[i] == my_s2[i] && i <= n)
	{
		i++;
		if ((my_s1[i] == '\0' && my_s2[i] == '\0') || i == n)
			return (0);
	}
	return (my_s1[i] - my_s2[i]);
}
