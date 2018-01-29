/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:58:35 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/11/30 17:59:36 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "ft_printf.h"

int		ft_getparam(char *format, char flag)
{
	char	*temp;
	int		ret;
	int		i;
	int		j;

	temp = ft_memalloc(ft_strlen(format));
	i = 0;
	if (format[i] == ' ' && ft_isdigit(format[i + 1]))
		i++;
	if (flag)
		while (!ft_isdigit(format[i]) && format[i] != ' ')
			i++;
	else if (ft_isdigit(format[ft_chrpos(format, '%') + 1]))
		i++;
	else
		i = ft_chrpos(format, flag) + 1;
	j = 0;
	while (ft_isdigit(format[i]))
		temp[j++] = format[i++];
	temp[j] = '\0';
	ret = ft_atoi(temp);
	free(temp);
	return (ret);
}
