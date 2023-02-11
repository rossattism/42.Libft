/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:20:20 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 14:53:22 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTMAP
 * VARIABLES: 'newlst': a pointer that moves through each node, 'newnode': 
 * the node that maintains the reference to the beginning of the list and
 * 'tmp': temporal variable needed to use the function 'f'.
 * IF: ensures the function by returning NULL so that there are no errors in 
 * the case that no value was received for the 'f', 'lst' and 'del' params.
 * WHILE: loop that starts with the existence of the list and sets 'tmp' 
 * equal to the function 'f' applied to the content of each element, and
 * 'newnode' equal to the function call of 'ft_lstnew' (which creates a 
 * new node using 'tmp'). IF: if 'newnode' does not exist then it deletes
 * the 'tmp' variable and frees the memory of the entire list because it 
 * means that a copy of the list cannot be created. ELSE: the loop continues 
 * adding 'newlst' to the end so that the copy is created while iterating 
 * through the entire base list.
 * RETURN: 'newlst' is returned which is the pointer to the first element of 
 * the new list, ie the list itself.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*tmp;

	newlst = NULL;
	newnode = NULL;
	if (!f | !del | !lst)
		return (NULL);
	while (lst)
	{
		tmp = f(lst->content);
		newnode = ft_lstnew(tmp);
		if (!newnode)
		{
			del(tmp);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
