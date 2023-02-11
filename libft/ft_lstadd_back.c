/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:03:46 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:03:48 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTADD_BACK
 * VARIABLE: 'tmp': temporal node.
 * IF: Condition that assigns 'lst' the value of 'new' if the list is empty, 
 * ie equal to null. This way, the last item in the list and the first are the 
 * same.
 * ELSE: If the list exists, 'tmp' is set equal to 'ft_lstlast' function call 
 * which returns the last node in the list. If 'tmp' is equal to the last node 
 * in the list, then setting 'next' of 'tmp' equal to 'new' adds 'new' to the 
 * end of the list.
 * INFO: 'next' of any node points to the next node.
**/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
