/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:00:56 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:01:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTSIZE:
 * @brief Counts the number of nodes in a list.
 * @param lst The beginning of the list.
 * @return The length of the list.
 * @details
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
