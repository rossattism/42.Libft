/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:27:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:29:09 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <string.h> // librería que contiene strncpy
#include <stdio.h> // librería que contiene printf y puts
#include "libft.h" // librería local que contiene ft_strlen
/**
 * @brief Agrega la cadena 'src' al final de 'dst' según el valor de 'dstsize'.
 *
 * @details La función strlcat() ofrece el argumento 'dstsize' que establece
 * la longitud de la cadena de destino igual al tamaño de su búfer.
 *
 * @param dst cadena de destino
 * @param src cadena de orígen
 * @param dstsize tamaño del búfer de destino
 * @return La longitud combinada de 'src' y 'dst'.
 */
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	/**
     * Comenzamos creando cuatro variables de tipo size_t para compararlas
     * con el prototipo 'size_t dstsize': dos contadores llamados 'i' y
     * 'j' y dos contenedores de la longitud de 'dst' y 'src' llamados
     * 'dstlen' y 'srclen'. Luego igualamos 'srclen' y 'dstlen' a el largo
     * de 'dst' y 'src' con ayuda de la función ft_strlen, igualamos 'i' a 0
     * y 'j' al largo de 'dst' que estará ahora contenido en 'dstlen'.
    */
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	/**
     * Continuamos creando una condición que nos permite concatenar 'src' y
     * 'dst' si el largo de 'dst' es menor que 'dstsize -1' y solo cuando
     * 'dstsize' sea mayor que 0. Para el bucle creamos la condición que
     * permita que el contador 'i' avance sobre 'src' y que 'j' avance sobre
     * 'dst' siempre teniendo en cuenta que 'dstlen + 1' debe ser menor que
     * 'dstsize -1'. Luego agregamos los caracteres nulos a 'dst' y creamos
     * otra condición que simplemente iguale 'dstlen' a 'dstsize' cuando
     * 'dstlen' sea mayor o igual que 'dstsize'. Finalmente, la función
     * devolverá 'dstlen' + 'srclen' que será el total de longitud de la
     * nueva cadena combinada.
    */
	if (dstlen < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dstlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
/**
* Para el main creamos 4 strings: dos son las cadenas 'src' y 'dst' que
* usaremos como argumentos para comprobar la función y las otras dos serán
* copias que usaremos para comprobar la función original y así poder comparar
* nuestra función con la original. A continuación creamos dos variables más que
* contendrán los retornos de ambas funciones: la nuestra y la original, y las
* igualamos a los llamados de las funciones pasándoles como argumentos las
* cadenas que creamos para cada una y el mismo valor para 'dstsize'. Luego
* usamos printf y puts para imrpimir los valores originales de las cadenas
* 'src' y 'dst', luego usamos strncpy para copiar 'src' en 'dst' e imprimir
* el nuevo string combinado con pintf que será el ejemplo que usaremos para
* ver si la longitud resultado de ambas funciones original y copia son los
* que queremos. Finalmente, imprimimos los resultados de ambas funciones y
* combrobamos si son iguales
*/
int main()
{
    char src[] = "strlcat";
    char dst[] = "isthestrlcat";
    char src1[] = "strlcat";
    char dst1[] = "isthestrlcat";
    int ret;
    int ret1;
 
    ret = ft_strlcat(dst, src, 4);
    ret1 = strlcat(dst1, src1, 4);
    printf("src: ");
    puts(src);
    printf("dst: ");
    puts(dst);
    strncpy(dst, src, 4);
    printf("src + dst: ");
    puts(dst);
    printf("ft_strlcat len: %d\n", ret);
    printf("strlcat len: %d", ret1);
}
