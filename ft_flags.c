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

void	ft_istype(char *format, char specif, char flag, va_list ap)
{
	if (specif == 'c' || specif == 'C')
		ft_c(ap, format, flag);
	else if (specif == 's' || specif == 'S')
		ft_s(ap, format, flag);
	else if (specif == 'p')
		ft_p(ap);
	else if (specif == 'x' || specif == 'X')
		ft_x(ap, format, specif);
	else if (specif == 'd' || specif == 'D')
		ft_d(ap, format, flag);
	else if (specif == 'i')
		ft_i(ap, format, flag);
	else if (specif == 'o' || specif == 'O')
		ft_o(ap, format, flag);
	else if (specif == 'u' || specif == 'U')
		ft_u(ap, format, flag);
}

char	ft_getflag(char flag)
{
	if (ft_isdigit(flag) && flag != '0')
		return ('0');
	else if (flag == '#')
		return ('#');
	else if (flag == '+')
		return ('+');
	else if (flag == '-')
		return ('-');
	else if (flag == ' ')
		return (' ');
	else if (flag == '.')
		return ('.');
	else if (flag == '*')
		return ('*');
	else if (flag == '0')
		return ('0');
	else
		return ('\0');
}

int		ft_chkmod(char *format)
{
	int	pos;

	pos = ft_chrpos(format, '%');
	if (format[pos + 1] == '%' && format[pos] == '%')
		return (2);
	else if (ft_chrpos(format, '%') == -1)
		return (-1);
	else if (ft_chrpos(format, '%') == 0 || format[0] == '%')
		return (1);
	else if (ft_chrpos(format, '%') > 0)
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
