/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 14:11:01 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/18 10:59:33 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;
	int		track;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(s));
	i = 0;
	track = 0;
	if ((char)s[i] == '\0')
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] != '\0')
		i = i - 1;
	while (s[i] != '\0')
	{
		tmp[track] = (char)s[i];
		i++;
		track++;
	}
	tmp[track] = '\0';
	return (tmp);
}
