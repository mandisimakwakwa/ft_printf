/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:39:54 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/11/30 17:52:20 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "ft_printf.h"

char	ft_getflag(char flag)
{
	if (flag == '0')
		return ('0');
	else if (flag == '#')
		return ('#');
	else if (flag == '+')
		return ('+');
	else if (flag == '-')
		return ('-');
	else if (flag == '.')
		return ('.');
	else if (flag == ' ')
		return (' ');
	else if (flag == '*')
		return ('*');
	else
		return ('\0');
}

void	ft_plusflag(int d, char flag, int param, char *format)
{
	int		d_width;
	char	add_on_flag;
	char	add_on_flag_val;

	d_width = param - ft_nbrlen(d);
	add_on_flag = format[ft_chrpos(format, flag) + 1];
	add_on_flag_val = format[ft_chrpos(format, flag) + 2];
	if (flag == '+' && add_on_flag != '0')
	{
		if (d_width)
			ft_fill(d_width, ' ');
		if (d > 0)
			ft_putchar('+');
		ft_putnbr(d);
	}
	if (flag == '+' && add_on_flag == '0')
	{
		d *= -1;
		ft_putchar('-');
		if (add_on_flag_val != '1')
			ft_putchar('0');
		ft_putnbr(d);
	}
}

void	ft_minusflag(int d, char flag)
{
	if (flag == '-')
		ft_putnbr(d);
}

void	ft_spaceflag(int d, char flag, int param)
{
	if (flag == ' ' && (param < 0) && d > 0)
		ft_putchar(' ');
	if (flag == ' ' && param)
	{
		ft_fill((param - ft_nbrlen(d)), ' ');
		ft_putnbr(d);
	}
}

void	ft_zeroflag(int d, char flag)
{
	if (flag == '0' && d < 0)
	{
		d *= -1;
		ft_putchar('-');
		ft_putchar('0');
		ft_putnbr(d);
	}
}
