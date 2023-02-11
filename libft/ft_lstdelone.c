/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:06:04 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:28:59 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTDELONE
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
