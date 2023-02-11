/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:03:02 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:03:06 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTLAST:
 * @brief Returns the last node of the list.
 * @param lst The beginning of the list.
 * @return The last node of the list.
 * @details
 * IF: Checks the existence of the list. WHILE: As long as there is a pointer 
 * to the next node, that is, as long as NULL is not reached, then the first 
 * element of the list will be 'next', that is, the next node.
 * RETURN: 'lst' is returned, which, once out of the loop, will point to the 
 * last item in the list.
**/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
