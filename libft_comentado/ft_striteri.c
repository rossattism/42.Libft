/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:24:52 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:24:57 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRITERI:
 * @brief A cada carácter de la string ’s’, aplica la función ’f’ dando como 
 * parámetros el índice de cada carácter dentro de ’s’ y la dirección del 
 * propio carácter, que podrá modificarse si es necesario.
 * @param s La string que iterar.
 * @param f La función a aplicar sobre cada carácter.
 * @return Nada.
 * @details
 * COUNTER: 'i' es una variable unsigned int que compensa por la 
 * posibilidad de una cadena de tipo long.
 * WHILE: bucle que itera sobre la string 's' mientras aplica la función 'f' 
 * a cada carácter. La función finaliza cuando el bucle se encuentra con el 
 * final de la cadena.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
