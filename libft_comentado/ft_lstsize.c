/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:01:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:01:25 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTSIZE:
 * @brief Cuenta el número de nodos dentro de una lista.
 * @param lst El principio de la lista.
 * @return El largo de la lista.
 * @details
 * COUNTER: creado para poder contar los elementos de la lista.
 * WHILE: bucle necesario para contar los elementos, donde 'lst' es igualado
 * al siguiente elemento en la lista para poder ir sumando 'i' y así contar
 * cada elemento.
 * RETURN: se devuelve 'i' que contendrá la cantidad de nodos dentro de la 
 * lista.
**/
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
