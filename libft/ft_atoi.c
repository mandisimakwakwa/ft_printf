/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 08:13:11 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/18 11:05:11 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int		i;
	int		conv;
	int		res;
	int		neg_chk;

	i = 0;
	conv = 0;
	neg_chk = 1;
	if (s == NULL)
		return (0);
	if (s[i] == '-')
	{
		neg_chk = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isesc(s[i]))
		i++;
	while (s[i] >= 48 && s[i] <= 57)
	{
		conv = conv * 10 + s[i++] - 48;
	}
	res = conv * neg_chk;
	return (res);
}
