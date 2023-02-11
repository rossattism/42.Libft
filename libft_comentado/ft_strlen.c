/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:21:06 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:20:15 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_STRLEN:
 * @brief Calcula el tamaño de una cadena de caracteres terminada en nulo
 * apuntada por 's'.
 * @param s Un puntero a la cadena de caracteres terminada en nulo.
 * @return El tamaño de 's'.
 * @details
 * SIZET: tipo de variable que puede contener únicamente valores no negativos
 * y que es compatible con la cadena de caracteres constante del prototipo.
 * WHILE: bucle que recorre 's' permitiendo devolver su tamaño, ya que este
 * será igual al valor de 'i' una vez finalizada la iteración.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**                               FT_MAIN:
 * @brief Convierte la función en programa para comprobarla por medio de la
 * declaración de una cadena de caracteres 's' y un integer 'ret' igualado al
 * llamado de la función con la cadena pasada como argumento. Utiliza printf
 * para imprimir el valor 'ret' que será el retorno de la función (el tamaño
 * de 's').
*/
int main(void)
{
	char s[]= "strlen";
	int ret = ft_strlen(s);
	printf ("len: %d", ret);
	return (0);
}
