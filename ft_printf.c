/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:42:30 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:53:51 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print(char *format, char flag, va_list ap, int i)
{
	i = ft_skip(format, i);
	ft_istype(format, format[i++], flag, ap);
	return (i);
}

static void	ft_process(char *format, va_list ap)
{
	char	flag;
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			flag = ft_getflag(format[i]);
			i = ft_print(format, flag, ap, i);
		}
		ft_putchar(format[i]);
		i++;
	}
}

static void	ft_in(char *format, va_list ap)
{
	int		ret;

	ret = ft_chkmod(format);
	if (ret == 1)
		ft_process(format, ap);
	else if (ret == 2)
		ft_mod(format);
	else if (ret < 0)
		ft_putstr(format);
	else
		ft_putstr(format);
}

int			ft_printf(const char *format, ...)
{
	va_list		ap;

	va_start(ap, format);
	ft_in((char *)format, ap);
	va_end(ap);
	return (0);
}
