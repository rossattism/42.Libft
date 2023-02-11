/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:30:07 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:20:01 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_TOLOWER:
 * @brief Convierte el carácter minúscula 'c' (pasado como integer) a mayúscula.
 * @details Si el argumento pasado a la función toupper() no es un alfabeto en
 * minúscula, devuelve el mismo carácter que fue pasado a la función.
 * @param c carácter a convertir pasado como integer
 * @return El carácter 'c' convertido a mayúscula, sino 'c'.
 * @details
 * IF: condición que comprueba si 'c' fue pasado como un carácter alfabético en 
 * mayúscula para luego convertirlo en minúscula.
 * RETURN: devuelve el valor de 'c' modificado si la confición se cumple y sino
 * el original pasado como argumento
 * INFO: La expresión "c += 32" es igual a decir que "c = c + 32" y mueve el 
 * carácter 'c' 32 posiciones hacia adelante en la tabla ASCII, que es el 
 * equivalente en minúscula del valor actual de 'c'.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/**                                FT_MAIN
 * @brief El main comprueba la función convirtiéndola en programa. Para esto
 * se utiliza printf para imprimir el carácter 'c' con ayuda del llamado a la
 * función pasando un valor como argumento a 'c'.
*/
int	main(void)
{
	printf("%c", ft_toupper('a'));
	return (0);
}
