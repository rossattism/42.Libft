/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:05:43 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:05:46 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTADD_BACK:
 * @brief Añade el nodo ’new’ al final de la lista 'lst'.
 * @param lst El puntero al primer nodo de una lista.
 * @param new El puntero al nodo que añadir a la lista.
 * @return Nada.
 * @details
 * VARIABLE: 'tmp': nodo temporal.
 * IF: Condición que le asigna a 'lst' el valor de 'new' si la lista es vacía,
 * es decir, igual a nulo. De esta manera, el último elemento de la lista y el
 * primero son el mismo.
 * ELSE: Si la lista existe, se iguala 'tmp' al llamado de la función 
 * 'ft_lstlast' que devuelve el último nodo de la lista. Si 'tmp' es igual
 * al último nodo de la lista, igualando 'next' de 'tmp' a 'new' se agrega
 * 'new' al final de la lista.
 * INFO: 'next' de cualquier nodo apunta al siguiente.
**/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
