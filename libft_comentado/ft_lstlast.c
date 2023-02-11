/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:03:16 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:03:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTLAST:
 * @brief Devuelve el último nodo de la lista.
 * @param lst El principio de la lista.
 * @return Último nodo de la lista.
 * @details
 * IF: Comprueba la existencia de la lista. WHILE: Mientras que exista un 
 * puntero al siguiente nodo, es decir, mientras que se llegue a NULO, entonces 
 * el primer elemento de la lista será 'next', es decir, el siguiente nodo.
 * RETURN: Se devuelve 'lst', que una vez fuera del bucle, apuntará al último 
 * elemento de la lista.
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
