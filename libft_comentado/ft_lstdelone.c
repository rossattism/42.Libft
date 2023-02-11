/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:07:34 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:07:36 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTDELONE:
 * @brief Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
 * utilizando la función ’del’ dada como parámetro, además de liberar el nodo. 
 * La memoria de ’next’ no debe liberarse.
 * @param lst El nodo a liberar.
 * @param del Un puntero a la función utilizada para liberar el contenido del 
 * nodo.
 * @return Nada.
 * @details
 * VARIABLE: 'tmp': nodo temporal que se iguala al puntero al primer nodo de 
 * la lista 'lst'.
 * IF: Comprueba si 'lst' y 'del' existen para evitar errores.
 * DEL: se utiliza la función en el 'content' de 'lst' para que lo elimine.
 * FREE: se libera la memoria.
**/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
