/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:21:41 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:41:42 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_MEMSET:
 * @brief Copia el carácter 'c' (casteado a unsigned char) en los primeros 'n'
 * bytes de un área de memoria apuntada por 'b'.
 * @param b El puntero al área de memoria.
 * @param c El carácter a copiar (pasado como integer).
 * @param n El número de bytes a reemplazar.
 * @return El puntero al área de memoria.
 * @details
 * SIZET: es un tipo de variable que se utiliza para 'i' de forma que pueda
 * ser comparado con 'n', garantiza que el argumento pasado a 'n' sea siempre
 * un número no negativo y que se pueda representar el tamaño más grande de
 * objeto posible.
 * CAST: Garantiza que la memoria sea llenada con el valor correcto sin
 * importar el tamaño de valor pasado a la función. El argumento 'c' es un
 * integer que puede tener un tamaño más grande que unsigned char, al
 * castearlo la función asegura que solo los 8 bits inferiores de int sean
 * utilizados, lo que equivale al tamaño de un byte.
 * WHILE: un bucle que itera sobre la versión casteada del área de memoria
 * apuntada por 'b' (unsigned char 'ma') rellenando los 'n' bytes de 'ma'
 * con el carácter 'c' (casteado a unsigned char). Como la función necesita
 * trabajar en una pieza generalizada de la memoria y no solo sobre cadenas
 * terminadas en nulo, este bucle se cumple mientras el valor del contador 
 * 'i' sea menor que 'n'.
 * RETURN: un puntero a 'b' que se encontrará modificado.
 */
void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char   *ma;
	size_t          i;

	i = 0;
	ma = (unsigned char *)b;
	while (i < n)
	{
		ma[i++] = (unsigned char)c;
	}
	return (b);
}

/**                               FT_MAIN:
 * @brief Convierte la función en programa haciendo posible comprobar su
 * resultado utilizando un string 's' que se pasa como argumento y la
 * utilización de las funciones 'strcpy' para copiar ese string y 'puts'
 * para imprimir su valor y el de retorno.
*/
int main(void)
{
	char s[30];
	strcpy(s, "memset");
	puts(s);
	ft_memset(s, 'l', 3);
	puts(s);
	return (0);
}
