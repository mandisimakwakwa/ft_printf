/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:50:54 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/12/06 18:15:46 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "ft_printf.h"

int		ft_skip(char *format, int i)
{
	while (!ft_isalpha(format[i]))
		i++;
	return (i);
}

void	ft_fill(int fillcount, char c)
{
	int	i;

	i = 0;
	while (i <= fillcount)
	{
		ft_putchar(c);
		i++;
	}
}

void	ft_o_support(int o, int param, char flag, char f_addon)
{
	if (o)
	{
		if (flag == '+' && param > 0)
			ft_fill(param - ft_nbrlen(o), ' ');
		if (flag == '0' && param > 0)
			ft_fill(param - ft_nbrlen(o), '0');
		if (flag == '#')
		{
			if (f_addon == '+' && param > 0)
				ft_fill(param - ft_nbrlen(o), ' ');
			ft_putchar('0');
		}
		ft_putoctal(o);
		if (flag == '#' && f_addon == '-')
			ft_fill(param - ft_nbrlen(o), ' ');
		if (flag == '-' && param > 0)
			ft_fill(param - ft_nbrlen(o), ' ');
	}
}

void	ft_o_support_p2(char flag, char *fmt, char f_addon)
{
	char	*tmp;
	int		param;

	param = '\0';
	if (flag == '-' && f_addon == '0')
	{
		if (ft_chrpos(fmt, '#') > 0)
		{
			ft_putchar('0');
			tmp = ft_strsub(fmt, ft_chrpos(fmt, '0') + 1, ft_strlen(fmt));
		}
		else
			tmp = ft_strsub(fmt, ft_chrpos(fmt, '+'), ft_strlen(fmt));
		param = ft_getparam(tmp, flag) - 1;
	}
	else if (flag == '#' && f_addon == '-')
		tmp = ft_strsub(fmt, ft_chrpos(fmt, '+') + 1, ft_strlen(fmt));
	else
		param = ft_getparam(fmt, flag) - 1;
	if (param > 0 && !flag)
		ft_fill(param - 1, ' ');
}

void	ft_c_support(char c, int param, char flag, char f_addon)
{
	if (param > 0 && !flag)
		ft_fill(param - 1, ' ');
	ft_putchar(c);
	if (f_addon == '-' && flag == '+')
		ft_fill(param - 1, ' ');
}
