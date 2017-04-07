/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specif2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:42:57 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:55:19 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_i(va_list ap, char *format, char flag)
{
	int	i;
	int	flag_no;
	int	width;

	i = va_arg(ap, int);
	flag_no = ft_flag_no(format, flag);
	width = ft_nbrlen(i) + 1;
	if (flag == '0')
		ft_fill(flag_no - width, flag);
	if (flag == '.')
		ft_fill(flag_no - width, '0');
	if (flag == '+')
		if (i > 0)
			ft_putchar('+');
	ft_putnbr(i);
}

void	ft_o(va_list ap, char *format, char flag)
{
	int o;
	int	flag_no;
	int	width;

	o = va_arg(ap, int);
	flag_no = ft_flag_no(format, flag);
	width = ft_nbrlen(o) + 1;
	if (flag == '-')
	{
		ft_putoctal(o);
		ft_fill(flag_no - width, ' ');
	}
	else
	{
		if (flag == '#')
			ft_putchar('0');
		if (flag == '.' || flag == '0')
			ft_fill(flag_no - width, '0');
		if (flag == 'b')
			ft_fill(flag_no - width, ' ');
		ft_putoctal(o);
	}
}

void	ft_u(va_list ap, char *format, char flag)
{
	unsigned int	u;
	int				flag_no;
	int				width;

	u = va_arg(ap, unsigned int);
	flag_no = ft_flag_no(format, flag);
	width = ft_nbrlen(u) + 1;
	if (flag == '0')
		ft_fill(flag_no - width, flag);
	if (flag == '.')
		ft_fill(flag_no - width, '0');
	if (flag == '+')
		if (u > 0)
			ft_putchar('+');
	ft_putunsigned(u);
}
