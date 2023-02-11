/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:36:25 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:57:29 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                           T_MEMCMP:
 * @brief Compara los primeros 'n' bytes de las áreas de memoria 's1' y 's2'.
 * @param s1 área de memoria 1
 * @param s2 área de memoria 2
 * @param n longitud de bytes
 * @return Un entero menor que 0 si (s1 < s2), igual a 0 si (s1 = s2), o mayor 
 * a 0 si (s1 > s2). Si 'n' es 0, devuelve 0.
 * @details
 * VARIABLES: dos cadenas 'unsigned char' llamadas 'ma1' (área de memoria 1) y 
 * 'ma2' (área de memoria 2), y un contador 'size_t' que se puede comparar con 
 * el prototipo "size_t n". 
 * SET: Se iguala 'ma1' y 'ma2' a los prototipos 's1' y 's2' casteados a 
 * "unsigned char" y se inicia el contador a 0. 
 * WHILE: condición creada para recorrer 'ma1' y 'ma2' siempre que el valor de 
 * 'i' sea menor que el valor de 'n' y IF: si ambas cadenas son diferentes.
 * RETURN: Si se cumple, la función devuelve la diferencia entre la posición 
 * de 'i' en 'ma1' y 'ma2'. De lo contrario, devuelve 0.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ma1;
	unsigned char	*ma2;
	size_t			i;

	ma1 = (unsigned char *)s1;
	ma2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ma1[i] != ma2[i])
			return (ma1[i] - ma2[i]);
		i++;
	}
	return (0);
}

/**                           FT_MAIN
 * @brief Para el main se crean dos cadenas que comparar y enviar a la 
 * función y todos los printf que sean necesarios para imprimir el valor de 
 * retorno de la función y comprobar que funcione.
*/
int main(void)
{
	char s1[] = "memcmp";
	char s2[] = "memcmpft";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 7));

	return (0);
}
