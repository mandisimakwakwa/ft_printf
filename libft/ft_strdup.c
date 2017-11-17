/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 17:57:08 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/18 10:59:04 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	if (s1 == NULL)
		ft_putstr("Error: NULL string.");
	tmp = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (tmp)
		tmp = ft_strcpy(tmp, s1);
	tmp[ft_strlen(s1)] = '\0';
	return (tmp);
}
