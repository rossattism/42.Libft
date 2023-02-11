/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:15:06 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 13:59:31 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTITER:
 * @brief Iterates the list 'lst' and applies the function 'f' in the content
 * of each node.
 * @param lst A pointer to the first node.
 * @param del A pointer to the function used in each node.
 * nodo.
 * @return Nothing
 * @details
 * IF: secures the function in case 'f' does not exist.
 * WHILE: loop condition that iterates over each node applying the function 
 * 'f' to the content of each one.
**/
void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
