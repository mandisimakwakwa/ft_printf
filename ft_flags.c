/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:42:24 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:55:23 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

char    ft_getFlag(char flag)
{
	if (flag == '0')
		return '0';
	else if (flag == '#')
		return '#';
	else if (flag == '+')
		return '+';
	else if (flag == '-')
		return '-';
	else if (flag == '.')
		return '.';
	else if (flag == ' ')
		return ' ';
	else if (flag == '*')
		return '*';
	else
		return '\0';
}

void    ft_plusFlag(int d, char flag, int param, char *format)
{
	int     d_width;
	char    addOnFlag;
	char    addOnFlagVal;

	d_width = param - ft_nbrlen(d);
	addOnFlag = format[ft_chrpos(format, flag) + 1];
	addOnFlagVal = format[ft_chrpos(format, flag) + 2];
	if (flag == '+' && addOnFlag != '0')
	{
		if (d_width)
			ft_fill(d_width, ' ');
		if (d > 0)
			ft_putchar('+');
		ft_putnbr(d);
	}
	if (flag == '+' && addOnFlag == '0')
	{
		d *= -1;
		ft_putchar('-');
		if (addOnFlagVal != '1')
			ft_putchar('0');
		ft_putnbr(d);
	}
}

void    ft_minusFlag(int d, char flag)
{
	if (flag == '-')
		ft_putnbr(d);
}

void    ft_spaceFlag(int d, char flag, int param)
{
	if (flag == ' ' && (param < 0) && d > 0)
		ft_putchar(' ');
	if (flag == ' ' && param)
	{
		ft_fill((param - ft_nbrlen(d)), ' ');
		ft_putnbr(d);
	}
}

void    ft_zeroFlag(int d, char flag)
{
	if (flag == '0' && d < 0)
	{
		d *= -1;
		ft_putchar('-');
		ft_putchar('0');
		ft_putnbr(d);
	}
}