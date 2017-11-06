/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:42:38 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:58:55 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(va_list ap, char *format, char flag)
{
	char	c;
	char	space;
	int		flag_no;
	int		width;

	c = va_arg(ap, int);
	space = 32;
	flag_no = ft_flag_no(format, flag);
	width = ft_nbrlen(c);
	if (flag_no > 0 && flag != '.')
		ft_fill(flag_no - width, space);
	ft_putchar(c);
	if (flag == '.')
		ft_fill(flag_no - width, space);
}

void	ft_s(va_list ap, char *format, char flag)
{
	char	*str;
	char	space;
	int		flag_no;
	int		width;

	str = va_arg(ap, char*);
	space = 32;
	flag_no = ft_flag_no(format, flag);
	width = ft_strlen(str) + 1;
	if (flag_no > 0 && flag != '.')
		ft_fill(flag_no - width, space);
	ft_dot_flag(format, str, flag);
	if (flag == '-')
		ft_fill(flag_no - width, space);
}

void	ft_p(va_list ap)
{
	int	nbr;

	nbr = va_arg(ap, int);
	ft_putstr("0x");
	ft_puthex(nbr);
}

void	ft_x(va_list ap, char *format, char specif)
{
	int	x;

	x = va_arg(ap, int);
	if (specif == 'x')
	{
		if (ft_strchr(format, '#'))
		{
			ft_putstr("0x");
			ft_puthex(x);
		}
		else
			ft_puthex(x);
	}
	else
	{
		if (ft_strchr(format, '#'))
		{
			ft_putstr("0X");
			ft_puthex_pf(x, '#');
		}
	}
}

void	ft_d(va_list ap, char *format, char flag)
{
	int		d;
//	int		d_1;
	int		flag_no;
	int		width;
	bool	boolValue;

	d = va_arg(ap, int);
//	d_1 = va_arg(ap, int);
	boolValue = false;
	flag_no = ft_flag_no(format, flag);

	if (flag == '+')
	{
		boolValue = true;
		if (flag_no > 0)
		    ft_fill(flag_no - (ft_nbrlen(d) + 2), ' ');
		ft_putchar('+');
		ft_putnbr(d);
	}
	if (ft_chrpos(format, flag) && flag != '+')
	{
		width = ft_nbrlen(d) + 1;
		if (flag == '0')
			ft_putchar('-');
		ft_fill(flag_no - width, flag);
		if (d > -1 && flag != '\0')
			ft_putchar('+');
	}
	if (flag != '*')
	{
		if (d < 0 && flag == '0')
			ft_putnbr(d * (-1));
		else
			if (boolValue == false)
				ft_putnbr(d);
	}
}
