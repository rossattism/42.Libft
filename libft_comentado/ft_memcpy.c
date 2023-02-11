/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:23:03 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:48:58 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_MEMCPY:
 * @brief Copia 'n' bytes del área de memoria apuntada por 'src' al área de
 * memoria apuntada por 'dest'.
 * @param dest El puntero al área de memoria de destino.
 * @param src El puntero al área de memoria de orígen.
 * @param n La longitud de bytes a modificar.
 * @return Un puntero al área de memoria de destino.
 * @details
 * CAST: Garantiza que la memoria sea llenada con el valor correcto sin
 * importar el tamaño de valor pasado a la función.
 * SIZET: es un tipo de variable que se utiliza para el contador 'i' de
 * forma que pueda ser comparado con 'n', garantiza que el argumento pasado
 * a 'n' sea siempre un número no negativo y que se pueda representar el
 * tamaño más grande de objeto posible.
 * IF: comprueba la existencia de 'd' y 's' y devuelve 0 si no existen.
 * WHILE: un bucle que se cumple mientras el contador sea menor que el valor
 * recibido de 'n' y que recorre tanto 'd' como 'i' mientras copia los 'n'
 * caracteres de 's' en 'd'.
 * RETURN: devuelve el puntero al área de memoria de destino 'dest'.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/**                               FT_MAIN:
 * @brief Convierte la función en programa haciendo posible testearla por medio 
 * de dos cadenas 'd' y 's' que se utilizan como argumentos, con una variable 
 * que contiene el valor de retorno que se iguala al llamado de la función 
 * y usando 'printf' para imprimir el resultado final.
 */
int main(void)
{
	char d[10];
	char s[10] = "memcpy";
	char *ret;
	ret = ft_memcpy (d, s, 2);
	printf ("%s", ret);
	return (0);
}
