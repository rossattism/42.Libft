/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:07:13 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:07:14 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTDELONE:
 * @brief Takes a ’lst’ node as a parameter and frees the memory of the content 
 * using the ’del’ function given as a parameter, in addition to freeing the 
 * node. The memory of 'next' mustn't be freed.
 * @param lst The node to free.
 * @param del A pointer to the function used to free the memory of the node's
 * content.
 * @return Nothing
 * @details
 * VARIABLE: 'tmp': temporal node set equal to the pointer to the first node 
 * of the list.
 * IF: Checks whether lst' and 'del' exist to avoid possible errors.
 * DEL: the function is used in the 'content' of 'lst' to remove it.
 * FREE: frees the memory.
**/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
