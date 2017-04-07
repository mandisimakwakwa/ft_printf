/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:32:58 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/08 11:26:02 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		i_2;
	char	*my_s1;

	i = 0;
	i_2 = ft_strlen(s1);
	my_s1 = s1;
	if (s2 == NULL)
	{
		my_s1[i_2 - 1] = '\0';
		return (my_s1);
	}
	while (s2[i] != '\0')
	{
		my_s1[i_2 + i] = (char)s2[i];
		i++;
	}
	my_s1[i_2 + i] = '\0';
	return (my_s1);
}
