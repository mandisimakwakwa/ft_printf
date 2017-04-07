/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_misc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:39:53 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:42:46 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	ft_fill(int flag_no, char c)
{
	int	i;

	i = 0;
	while (i <= flag_no)
	{
		ft_putchar(c);
		i++;
	}
}

int		ft_skip(char *format, int i)
{
	while (!ft_isalpha(format[i]))
		i++;
	return (i);
}

int		ft_flag_no(char *format, char flag)
{
	char	*tmp;
	int		ret;
	int		i;
	int		j;

	tmp = ft_memalloc(ft_strlen(format));
	i = 0;
	if (flag == 'b')
		while (!ft_isdigit(format[i]))
			i++;
	else
		i = ft_chrpos(format, flag) + 1;
	j = 0;
	while (ft_isdigit(format[i]))
	{
		tmp[j] = format[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	ret = ft_atoi(tmp);
	free(tmp);
	return (ret);
}

void	ft_dot_flag(char *format, char *tmp, char flag)
{
	int	i;
	int	flag_no;

	i = 0;
	flag_no = ft_flag_no(format, flag);
	if (flag == '.')
		while (i < flag_no)
		{
			ft_putchar(tmp[i]);
			i++;
		}
	else
		ft_putstr(tmp);
}

void	ft_putwidth(int x, int x_1)
{
	int		width;

	width = ft_nbrlen(x_1) + 1;
	ft_fill((x - width), ' ');
	ft_putnbr(x_1);
}
