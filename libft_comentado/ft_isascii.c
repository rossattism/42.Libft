/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:07:46 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:15:07 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISASCII:
 * @brief Verifica si el carácter (pasado como integer) es ASCII.
 * @param c El carácter a verificar.
 * @return 1 si es ascii, 0 si no lo es.
 * @details
 * IF: condición que verifica si 'c' es un carácter ascii y que devuelve 1 en
 * caso de serlo o 0 en caso de no serlo.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/**                               FT_MAIN:
 * @brief Comprueba que la función sea correcta por medio de una variable
 * integer 'ret' que contiene el valor devuelto y que es igualada al llamado
 * de la función con los argumentos pasados. El valor devuelto es convertido
 * a carácter sumando 48 para poder ser impreso por write.
*/
int	main(void)
{
	int ret = ft_isascii('a') + 48;
	write (1, &ret, 1);
	return(0);
}
