/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:27:12 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 14:57:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_LSTMAP:
 * @brief Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada 
 * nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la 
 * función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el 
 * contenido de un nodo, si hace falta.
 * @param lst Un puntero al primer nodo de la lista.
 * @param f La dirección de un puntero a una función usada en la iteración de 
 * cada elemento de la lista.
 * @param del Un puntero a función utilizado para eliminar el contenido de un 
 * nodo, si es necesario.
 * @return  La nueva lista o NULL si falla la reserva de memoria.
 * @details 
 * VARIABLES: 'newlst': el puntero que va moviéndose por cada nodo y 'newnode':
 * el nodo que mantiene la referencia al principio de la lista y 'tmp': la
 * variable temporal tipo void necesaria para aplicar la función 'f'.
 * IF: asegura la función devolviendo NULO para que no haya errores en el caso
 * de que no se haya recibido ningún valor para los parámetros 'f', 'del' y
 * 'lst'.
 * WHILE: bucle que se inicia con la existencia de la lista y que iguala 'tmp'
 * a la función 'f' aplicada a cada elemento de la lista y 'newnode' al llamado
 * de la función 'ft_lstnew' que crea un nuevo nodo con 'tmp'. IF: si 'newnode'
 * no existe entonces elimina 'tmp' y libera la memoria de toda la lista 
 * porque significa que no puede crearse una copia de la de referencia. ELSE: 
 * el bucle continúa y se va añadiendo 'newnode' al final para que se vaya
 * creando la copia mientras se itera por toda la lista base.
 * RETURN: se devuelve 'newlst' que es el puntero al primer elemento de la 
 * nueva lista, es decir la lista en sí.
**/

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
