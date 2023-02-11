/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:50:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:55:56 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_LSTNEW
 * VARIABLE: 'new': the new node to fill in with 'content'.
 * TLIST: variable of type list needed to interact with lists.
 * MALLOC: when a node is created, a malloc allocation is needed and must be 
 * with a size of 't_list'.
 * IF: checks the existence of 'new' to prevent errors and returns 'NULL'.
 * FIRST: New's content is filled with the content passed by value.
 * SECOND: the final element of the list is NULL.
 * RETURN: the new node is returned.
 * INFO: a node is an element from the list, a list can be formed of only one
 * element.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = 0;
	return (new);
}
