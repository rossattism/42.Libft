/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:17:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 13:59:21 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTITER:
 * @brief Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada 
 * nodo.
 * @param lst Un puntero al primer nodo.
 * @param del Un puntero a función que se utilizará con cada nodo.
 * nodo.
 * @return Nada.
 * @details
 * IF: evita errores en el caso de que 'f' no exista.
 * WHILE: bucle que itera sobre todos los nodos y aplica la función 'f' al 
 * contenido ('content') de cada uno.
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
