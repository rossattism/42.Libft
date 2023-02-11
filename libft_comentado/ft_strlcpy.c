/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:26:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 13:27:32 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**								FT_STRLCPY:
 * @brief Copia la cadena apuntada por 'src' terminada en nulo en el búfer
 * apuntado por 'dest', asegurando que el búfer de destino termina siempre
 * en nulo. Solo se copian como máximo 'size' caracteres, y el valor devuelto 
 * es el tamaño 'src'. Siempre devuelve el tamaño de la cadena 'src', 
 * independientemente de cuántos caracteres se copien.
 * @param dest el puntero al buffer de destino
 * @param src el puntero a la cadena de orígen
 * @param size el tamaño del búfer de destino
 * @return La longitud de la cadena de orígen 'src'.
 * @details 
 * IF: condición que comprueba si el valor recibido por 'size' como argumento
 * es igual a 0 y que devuelve la longitud de 'src' calculada con 'ft_strlen'.
 * WHILE: bucle que recorre 'dest' y 'src' mientras copia, a su vez, 'src' en
 * 'dest' siempre y  cuando 'src' exista y el contador 'i' sea menor que
 * 'size' -1 (que corresponde al valor nulo). Al salir se agrega nulo al 
 * final del nuevo 'dest'.
 * RETURN: la longitud de 'src' calculada por medio de 'ft_strlen'.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i]  && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/**                           FT_MAIN
 * @brief Comprueba la función utilizando dos cadenas de caracteres 'd' y
 * 's' que se pasan como argumentos, una variable 'ret' igualada al llamado
 * de la función y el uso de 'printf' para imprimir 's' y 'ret'.
*/
int	main(void)
{
	char s[] = "strlcpy";
	char d[] = "is";
	int ret;

	ret = ft_strlcpy(d, s, 4);
	printf("%s\n", s);
	printf("%d", ret);
	return (0);
}
