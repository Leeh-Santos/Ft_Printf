/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 23:41:31 by learodri          #+#    #+#             */
/*   Updated: 2022/03/02 23:54:16 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Counts the number of elements in a list. lst - gancho
*/

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst != (struct s_list *)0)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
