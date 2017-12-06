/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_speciftype2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:12:49 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/12/02 17:57:01 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "ft_printf.h"

void	ft_d(va_list ap, char *format, char flag)
{
	int	param;
	int	d;

	param = ft_getparam(format, flag) - 1;
	d = va_arg(ap, int);
	if (param && flag == '\0')
		ft_fill(param - ft_nbrlen(d), ' ');
	if (flag)
	{
		ft_plusflag(d, flag, param, format);
		ft_minusflag(d, flag);
		ft_spaceflag(d, flag, param);
		ft_zeroflag(d, flag);
	}
	else
		ft_putnbr(d);
}

void	ft_i(va_list ap, char *format, char flag)
{
	int	i;
	int	i_length;
	int	param;

	i = va_arg(ap, int);
	param = ft_getparam(format, flag) - 1;
	i_length = ft_nbrlen(i) + 1;
	if (flag == '0')
		ft_fill(param - i_length, flag);
	if (flag == '.')
		ft_fill(param - i_length, '0');
	if (flag == '+')
		if (i > 0)
			ft_putchar('+');
	ft_putnbr(i);
}

void	ft_o(va_list ap, char *format, char flag)
{
	int		o;
	int		param;
	char	f_addon;
	char	*tmp;

	o = va_arg(ap, int);
	param = ft_getparam(format, flag) - 1;
	f_addon = format[ft_chrpos(format, flag) + 1];
	if (flag == '0')
	{
		tmp = ft_strsub(format, ft_chrpos(format, '0') + 1, ft_strlen(format));
		param = ft_getparam(tmp, flag) - 1;
	}
	ft_o_support_p2(flag, format, f_addon);
	ft_o_support(o, param - 1, flag, f_addon);
}

void	ft_u(va_list ap, char *format, char flag)
{
	unsigned int	u;
	int				param;
	int				u_length;

	u = va_arg(ap, unsigned int);
	param = ft_getparam(format, flag) - 1;
	u_length = ft_nbrlen(u);
	if (flag == '0')
		ft_fill((param - u_length), flag);
	if (flag == '.')
		ft_fill((param - u_length), '0');
	if (param)
		ft_fill(param - u_length, ' ');
	ft_putunsigned(u);
}
