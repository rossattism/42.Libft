/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:36:25 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:37:05 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <stdio.h> // librería que contien printf
/**
 * @brief Compara los primeros 'n' bytes de las áreas de memoria 's1' y 's2'.
 *
 * @details La función memcmp() compara la cadena de bytes 's1' con la cadena
 * de bytes 's2'. Se supone que ambas cadenas tienen una longitud de 'n' bytes.
 * Devuelve cero si las dos cadenas son idénticas; de lo contrario, devuelve
 * la diferencia entre los dos primeros bytes diferentes (tratados como
 * caracteres sin signo). Las cadenas de longitud cero son siempre idénticas.
 *
 * @param s1 área de memoria 1
 * @param s2 área de memoria 2
 * @param n longitud de bytes
 * @return Un entero menor que 0 si (s1 < s2), igual a 0 si (s1 = s2),
 * or mayor a 0 si (s1 > s2). Si 'n' es 0, devuelve 0.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	/**
     * Comenzamos creando dos cadenas 'unsigned char' llamadas 'ma1'
     * (área de memoria 1) y 'ma2' (área de memoria 2), y un contador
     * 'size_t' que se puede comparar con el prototipo "size_t n".
     * Luego igualamos 'ma1' y 'ma2' a los prototipos 's1' y 's2' casteados
     * a "unsigned char" e iniciamos el contador a 0. A continuación, creamos
     * una condición para recorrer 'ma1' y 'ma2' siempre que el valor de 'i'
     * sea menor que el valor de 'n' y si ambas cadenas son diferentes.
     * Si se cumple, la función devuelve la diferencia entre la posición de 'i'
     * en 'ma1' y 'ma2'. De lo contrario, devuelve 0.
    */
	unsigned char *ma1;
	unsigned char *ma2;
	size_t i;

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
/**
 * Para el main creamos dos cadenas para comparar y enviar a la función 
 * y todos los printf que creamos necesarios para imprimir el valor de 
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
