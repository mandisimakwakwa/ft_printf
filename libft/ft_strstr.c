/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 15:04:22 by mmakwakw          #+#    #+#             */
/*   Updated: 2016/08/08 15:56:05 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	track;
	size_t	len;

	i = 0;
	track = 0;
	len = ft_strlen(little);
	if (len == 0)
		return (char *)big;
	while (big[i])
	{
		while (little[track] == big[i + track])
		{
			if (track == (len - 1))
				return ((char *)big + i);
			track++;
		}
		track = 0;
		i++;
	}
	return (NULL);
}
