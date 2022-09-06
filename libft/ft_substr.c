/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:57:27 by learodri          #+#    #+#             */
/*   Updated: 2022/03/08 21:35:19 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
reserves with malloc and returns the substring from 'start'
and maximun size 'len;
*/

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sl;
	char	*dest;

	if (src == NULL)
		return (NULL);
	i = -1;
	sl = ft_strlen(src);
	if (start >= sl)
	{
		dest = malloc(sizeof(char));
		if (dest == NULL)
			return (NULL);
		*dest = '\0';
		return (dest);
	}
	else if (sl < len)
		return (ft_strdup(src + start));
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (++i < len && start < sl)
		dest[i] = src[start + i];
	dest[i] = '\0';
	return (dest);
}
