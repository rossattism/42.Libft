/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:57:29 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:57:38 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_LSTADD_FRONT
 * IF: Once the existence of 'new' and 'lst' is checked, the condition defines 
 * that 'next' (a pointer to the next element in the list) will be equal to 
 * '*lst' (a pointer to the first element of the list), so that '*lst' can be 
 * redirected to 'new'.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
