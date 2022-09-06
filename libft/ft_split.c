/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:40:25 by learodri          #+#    #+#             */
/*   Updated: 2022/03/08 20:47:28 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ola mundo programa, char ' '
s[] = {ola,mundo,programa}
*/

#include "libft.h"

size_t	ft_contar(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**splitado;
	char	*stri;
	size_t	num;

	if (!s)
		return (0);
	num = ft_contar(s, c);
	splitado = (malloc(sizeof(char *) * (num + 1)));
	if (splitado == NULL)
		return (NULL);
		stri = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (stri != s)
				*(splitado++) = ft_substr(stri, 0, s - stri);
			stri = (char *)s + 1;
		}
		s++;
	}
	if (stri != s)
	*(splitado++) = ft_substr(stri, 0, s - stri);
	*splitado = 0;
	return (splitado - num);
}
