/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:07:50 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:10:22 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTCLEAR
 * VARIABLE: 'tmp': temporal node set equal to null to be empty.
 * WHILE: Loop condition that starts with the existence of '*lst' and where 
 * 'tmp' is set equal to a pointer to the next element in '*lst', the function
 * 'ft_lstdelone' is used to eliminate the content of the node and after
 * '*lst' is set equal to 'tmp'. Thanks to this loop all the list nodes are 
 * eliminated one by one.
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
