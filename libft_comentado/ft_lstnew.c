/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:51:45 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:51:57 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_LSTNEW:
 * @brief Crea un nuevo nodo utilizando malloc(3). La variable miembro 
 * ’content’ se inicializa con el contenido del parámetro ’content’. La 
 * variable ’next’, con NULL.
 * @param content El contenido con el que crear el nodo.
 * @return El nuevo nodo.
 * @details
 * VARIABLE: 'new': el nodo a rellenar con 'content'.
 * TLIST: variable de tipo 't_list' necesaria para interactuar con listas.
 * MALLOC: para crear un nodo, es necesario reservar memoria con malloc que
 * debe ser de tamaño 't_list'.
 * IF: comprueba la existencia de 'new' para prevenir errores y devuelve NULO.
 * FIRST: el contenido de new se rellena con el contenido de 'content' pasado
 * como argumento.
 * SECOND: el elemento final de la lista es NULO, porque está conformada de 
 * un solo elemento y las listas siempre terminan en nulo.
 * RETURN: se devuelve el nuevo nodo.
 * INFO: un nodo es un elemento de una lista, una lista puede estar conformada
 * por un solo elemento, la única forma de acceder a ellos es por medio de 
 * punteros.
**/
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
