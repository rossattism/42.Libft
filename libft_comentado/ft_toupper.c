/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:29:27 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:18:49 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                              FT_TOUPPER
 * @brief Convierte el carácter minúscula 'c' (pasado como integer) a mayúscula.
 * @details Si el argumento pasado a la función toupper() no es un alfabeto en
 * minúscula, devuelve el mismo carácter que fue pasado a la función.
 * @param c carácter a convertir pasado como integer
 * @return El carácter 'c' convertido a mayúscula, sino 'c'.
 * @details
 * IF: condición que comprueba si 'c' fue pasado como un carácter alfabético en 
 * minúscula para luego convertirlo.
 * RETURN: el valor de 'c' convertido u original en caso de no cumplir la 
 * condición del 'if'.
 * INFO: La expresión "c -= 32" es igual a decir que "c = c - 32" y mueve el 
 * carácter 'c' 32 posiciones hacia atrás en la tabla ASCII, que es el 
 * equivalente en mayúscula del valor actual de 'c'.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/**                              FT_MAIN
 * @brief El main comprueba la función convirtiéndola en programa. Para esto 
 * se utiliza printf para imprimir el carácter 'c' con ayuda del llamado a la 
 * función pasando un valor como argumento a 'c'.
*/
int	main(void)
{
	printf("%c", ft_toupper('a'));
	return (0);
}
