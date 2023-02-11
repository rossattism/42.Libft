/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:59:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:59:34 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_LSTADD_FRONT:
 * @brief Añade el nodo ’new’ al principio de la lista ’lst’.
 * @param lst La dirección de un puntero al primer nodo de una lista.
 * @param new Un puntero al nodo que añadir al principio de la lista.
 * @return Nada
 * @details
 * IF: Una vez se comprueba la existencia de 'new' y 'lst', se entra dentro de
 * la condición que define que 'next' (un puntero al siguiente elemento de la
 * lista) será igual a '*lst' (el puntero al primer elemento de la lista), de 
 * manera que luego se pueda redireccionar '*lst' a 'new'.
**/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
