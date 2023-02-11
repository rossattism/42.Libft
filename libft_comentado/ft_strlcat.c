/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:27:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 14:02:04 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRLCAT
 * @brief Agrega la cadena 'src' al final de 'dst' según el valor de 'dstsize'.
 * La función strlcat() ofrece el argumento 'dstsize' que establece la longitud 
 * de la cadena de destino igual al tamaño de su búfer.
 * @param dst Puntero a la cadena de destino.
 * @param src Puntero a la cadena de orígen.
 * @param dstsize El tamaño del búfer de destino.
 * @return La longitud combinada de 'src' y 'dst'.
 * @details
 * VARIABLES: 'i': contador que itera sobre 'src'; 'j': contador que itera sobre 
 * 'j' y es igualado al largo de 'dest'; 'destlen': contenedor del largo de 
 * 'dest'; 'srclen': contenedor del largo de 'src'.
 * IF: condicion que permite concatenar 'src' a 'dst' si el largo de 'dst' es
 * menor que 'dstsize -1' y solo cuando 'dstsize' es mayor que 0. 
 * WHILE: bucle que permite que el contador 'i' itere sobre 'src' y 'j' sobre 
 * 'dst' siempre teniendo en cuenta que 'dstlen + i ' debe ser menor que 
 * 'dstsize -1'. 
 * NEXT: Luego del bucle, los caracteres NULOs son adheridos al final de 'dst'.
 * IF: Condición que iguala 'dstlen' a 'dstsize' cuando 'dstlen' es mayor o igual
 * que 'dstsize'. 
 * RETURN: 'dstlen' + 'srclen' que será el largo total de la nueva string 
 * combinada. 
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
    size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
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
/**                            FT_MAIN
 * @brief Para el main se crean 4 strings: dos son las cadenas 'src' y 'dst' que
 * se utilizan como argumentos para comprobar la función y las otras dos serán
 * copias que se utilizan para comprobar la función original y así poder comparar
 * la función con la original. A continuación se crean dos variables más que 
 * contendrán los retornos de ambas funciones: la actual y la original, y se 
 * igualan a los llamados de las funciones pasándoles como argumentos las 
 * cadenas creadas para cada una y el mismo valor para 'dstsize'. Luego se 
 * utilizan 'printf' y 'puts' para imrpimir los valores originales de las cadenas
 * 'src' y 'dst' y 'strncpy' para copiar 'src' en 'dst' e imprimir el nuevo 
 * string combinado con 'printf' que será el ejemplo utilizado para ver si la 
 * longitud resultado de ambas funciones original y copia son las esperadas. 
 * Finalmente, se imprimen los resultados de ambas funciones y se comprueba si 
 * son iguales.
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
