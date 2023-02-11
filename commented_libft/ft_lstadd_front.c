/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:58:46 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:58:53 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_LSTADD_FRONT:
 * @brief Adds the node 'new' to the beginning of the list ’lst’.
 * @param lst The address of a pointer to the first node in a list.
 * @param new A pointer to the node to add to the beginning of the list.
 * @return Nothing
 * @details
 * IF: Once the existence of 'new' and 'lst' is checked, we enter the condition 
 * that defines that 'next' (a pointer to the next element in the list) will be 
 * equal to '*lst' (a pointer to the first element of the list), so that '*lst' 
 * can be redirected to 'new'.
**/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
