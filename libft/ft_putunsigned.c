/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:49:23 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 14:54:59 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsigned(unsigned int n)
{
	if (n > 9)
	{
		ft_putunsigned(n / 10);
		ft_putunsigned(n % 10);
	}
	else
		ft_putchar(n + '0');
}
