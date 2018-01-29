/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:05:27 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/12/06 18:06:47 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_puthex_rec(unsigned int n)
{
	char	c;
	char	*map;

	map = "0123456789abcdef";
	if (n)
	{
		c = (char)(n & 0xF);
		n = (n >> 4);
		ft_puthex_rec(n);
		ft_putchar(map[(int)c]);
	}
}

void		ft_puthex(unsigned int n)
{
	ft_puthex_rec(n);
}
