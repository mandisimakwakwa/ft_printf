/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:06:56 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/12/06 18:07:25 by mmakwakw         ###   ########.fr       */
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

static void	ft_puthex_rec2(unsigned int n)
{
	char	c;
	char	*map;

	map = "0123456789abcdef";
	if (n)
	{
		c = (char)(n & 0xF);
		n = (n >> 4);
		ft_puthex_rec(n);
		ft_putchar(ft_toupper(map[(int)c]));
	}
}

void		ft_puthex_pf(unsigned int n, char flag)
{
	if (flag != '#')
		ft_puthex_rec(n);
	else
		ft_puthex_rec2(n);
}
