/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:09:30 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:10:11 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTCLEAR:
 * @brief Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese 
 * nodo, utilizando la función ’del’ y free(3). Al final, el puntero a la lista 
 * debe ser NULL.
 * @param lst La dirección de un puntero a un nodo.
 * @param del Un puntero a función utilizado para eliminar el contenido de un 
 * nodo.
 * @return Nada.
 * @details
 * VARIABLE: 'tmp': nodo temporal que se iguala a nulo para que esté vacío.
 * WHILE: Bucle que comienza con la existencia de la lista y donde 'tmp' es
 * igualada al puntero al siguiente elemento en '*lst', la función 
 * 'ft_lstdelone' es utilizada para eliminar el contenido de cada nodo de la 
 * lista y '*lst' is igualada luego a 'tmp' para que el puntero sea nulo al
 * final.
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
