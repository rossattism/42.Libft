/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:10:51 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:11:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**								FT_CALLOC
 * @brief Asigna dinámicamente memoria de un array de 'nmemb' elementos de 
 * 'size' bytes cada uno.
 * @param nmemb El número de elementos del array.
 * @param size El tamaño de cada elemento.
 * @return Un puntero a la memoria asignada o un puntero a nulo si algo falla.
 * @details
 * VARIABLE: 'memory': un puntero al espacio de memoria a asignar. 
 * MALLOC: Se utiliza para asignar la memoria, que será el equivalente a la 
 * multiplicación entre 'size' y 'nmemb'. Por ejemplo, si quiero asignar 
 * memoria para dos elementos integer, la cuenta sería 4 * 2 = 8 porque cada 
 * elemento integer ocupará un tamaño de 4 bytes. 
 * IF: condición que devuelve el puntero a nulo si la memoria llega vacía por 
 * argumento 
 * BZERO: la función 'ft_bzero' vacía la memoria. 
 * RETURN: se devuelve la memoria ya reservada y correctamente vaciada.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(size * nmemb);
	if (memory == 0)
		return (0);
	ft_bzero(memory, (size * nmemb));
	return (memory);
}
/**									FT_MAIN
 * En todos los casos el main devolverá valores vacíos, ya que la función vacía 
 * memoria, es decir, pone la memoria a 0 y devuelve nulo en caso de error.
*/
int	main(void)
{
	char	*ma;

	ma = ft_calloc(2, 4);
	printf("return: %s\n", ma)
}
