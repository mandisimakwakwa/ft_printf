/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:55:33 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/11/30 17:58:04 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "ft_printf.h"

int		ft_checkmod(char *format)
{
	int	mod_pos;

	mod_pos = ft_chrpos(format, '%');
	if (format[mod_pos + 1] == '%' && format[mod_pos] == '%')
		return (2);
	else if (mod_pos == -1)
		return (-1);
	else if (mod_pos == 0 || format[0] == '%')
		return (1);
	else if (mod_pos > 0)
		return (1);
	else
		return (0);
}

void	ft_mod(char *format)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ft_putchar(format[i++]);
		}
		ft_putchar(format[i]);
		i++;
	}
}
