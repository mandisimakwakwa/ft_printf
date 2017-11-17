/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 11:26:50 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/08 12:02:34 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		i_2;
	char		*my_s1;

	i = 0;
	i_2 = ft_strlen(s1);
	my_s1 = s1;
	if (s2 == NULL)
	{
		my_s1[i_2 - 1] = '\0';
		return (my_s1);
	}
	while (s2[i] != '\0' && i < n)
	{
		my_s1[i_2 + i] = (char)s2[i];
		i++;
	}
	my_s1[i_2 + i] = '\0';
	return (my_s1);
}
