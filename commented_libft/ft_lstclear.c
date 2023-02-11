/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:09:12 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:10:29 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTCLEAR:
 * @brief Removes and frees the given 'lst' node and all consecutive nodes of 
 * that node, using the 'del' function and free(3). At the end, the pointer to 
 * the list must be NULL.
 * @param lst The address of a pointer to a node.
 * @param del A pointer to the function used to remove the contents of a node.
 * @return None.
 * @details
 * VARIABLE: 'tmp': temporal node set equal to null to be empty.
 * WHILE: Loop condition that starts with the existence of '*lst' and where 
 * 'tmp' is set equal to a pointer to the next element in '*lst', the 
 * function 'ft_lstdelone' is used to eliminate the content of the node and 
 * after '*lst' is set equal to 'tmp'. Thanks to this loop all the list nodes 
 * are eliminated one by one.
**/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = NULL;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
