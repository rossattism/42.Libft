/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:26:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:27:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // librería que contiene printf
#include "libft.h" // librería local que contiene ft_strlen
/**
 * @brief Copia la cadena 'src' terminada en nulo en el búfer 'dst'
 *
 * @details Con la función strlcpy() solo se copian como máximo
 * 'dstsize' caracteres, y el valor devuelto es el tamaño 'src'.
 * Siempre devuelve el tamaño de la cadena 'src',
 * independientemente de cuántos caracteres se copien.
 *
 * @param dst cadena de destino
 * @param src cadena de orígen
 * @param dstsize tamaño del búfer de destino
 * @return La longitud de la cadena de orígen 'src'.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	/**
	* Comenzamos creando un contador 'unsigned int' que vamos
	* a necesitar para poder compararlo con 'size_t dstsize'.
	*/
	unsigned int	i;

    i = 0;
	/**
     * Continuamos creando una primera condición que tendrá como
     * función devolver el largo de la cadena de orígen en el caso
     * de que 0 fuera pasado como argumento de 'dstsize'. La segunda
     * condición será un bucle que copie la 'src' en 'dst' dependiendo
     * del tamaño del búfer de 'dst'. Finalmente añadimos el carácter
     * nulo al final de 'dst' y devolvemos la longitud de 'src' como
     * pide la función original.
     */
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i]  && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/**
 * Para el main comenzamos creando dos strings de tipo char llamados 'src'
 * y 'dst' para pasar como argumentos de la función y poder comprobar los
 * resultados. A continuación creamos un integer que contendrá el retorno de
 * la función y lo igualamos al llamado de la función pasando los strings y
 * el largo de 'dstsize' como argumentos. Finalmente usamos printf para
 * imprimir 'src' y para imprimir el retorno de la función y así poder
 * compararlos.
 */
int main()
{
 char src[] = "strlcpy";
 char dst[] = "is";
 int ret;
 
 ret = ft_strlcpy(dst, src, 4);
 printf("%s\n", src);
 printf("%d", ret);
}
