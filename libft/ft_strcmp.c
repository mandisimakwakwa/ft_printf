/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 17:42:07 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/18 11:01:26 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	char	*my_s1;
	char	*my_s2;

	i = 0;
	my_s1 = (char *)s1;
	my_s2 = (char *)s2;
	while (my_s1[i] && my_s2[i] && my_s1[i] == my_s2[i])
		i++;
	return (my_s1[i] - my_s2[i]);
}
