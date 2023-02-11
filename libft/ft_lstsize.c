/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:00:01 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:00:16 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTSIZE
 * COUNTER: created to iterate over the elements of the list.
 * WHILE: loop necessary to iterate over the elements. First, 'lst' is set 
 * equal to the next element in the list in order to use 'i' to iterate over
 * each element.
 * RETURN: 'i', that contains the amount of nodes in the list, is returned.
**/

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
