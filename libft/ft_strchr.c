/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:33:34 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/11/24 12:44:19 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
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
	if (track == 0)
		return (NULL);
	return (tmp);
}
