/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 00:04:38 by learodri          #+#    #+#             */
/*   Updated: 2022/02/22 00:27:11 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
0 = are equal, (< 0) s1 is less , (>0) s2 is less
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s1)[i]) == (((unsigned char *)s2)[i]))
			i++;
		else
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
	}
	return (0);
}
