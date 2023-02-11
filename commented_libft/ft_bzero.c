/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:01:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:45:25 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_BZERO:
 * @brief Convierte en nulos los primeros 'n' caracteres del área de memoria
 * apuntada por 's'.
 * @param s Un puntero al área de memoria.
 * @param n La longitud de bytes a modificar.
 * @return No tiene.
 * @details
 * SIZET: asegura que el valor de 'n' será siempre no negativo, que pueda ser
 * contenido más allá de lo grande que sea su valor y que 'i' podrá ser
 * comparado con 'n' una vez dentro del bucle.
 * CAST: el área de memoria se castea a 'unsigned char' para que se garantice
 * que la operación sobre el puntero sea a nivel bytes y no a un objeto mayor.
 * WHILE: bucle que se cumple mientras la condición de que el contador 'i' sea
 * menor que el valor recibido por 'n' sea cierta y que se encarga de recorrer
 * la versión casteada del área de memoria apuntada por 's' (unsigned char *ma)
 * mientras la rellena con valores nulos.
 * RETURN: No tiene.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = s;
	while (i < n)
	{
		ma[i++] = 0;
	}
}

/**                                   FT_MAIN:
 * Convierte la función en programa para comprobarla por medio de un área
 * de memoria vacía 'ma' que se pasa como argumento y la utilización 'strcpy' y
 * 'puts' para copiarla e imprimirla respectivamente.
*/
int main(void)
{
	char ma[10];
	strcpy(ma, "bzero");
	puts(ma);
	ft_bzero(ma, 2);
	puts(ma);
	return (0);
}