/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:07:40 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:04:41 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISALPHA:
 * @brief Verifica si el carácter 'c' (pasado como integer) es alfabético o no.
 * @param c el carácter a verificar
 * @return 1 si 'c' es alfabético, 0 si no lo es.
 * @details
 * IF: condición que verifica si 'c' es un carácter alfabético y devuelve 1
 * en caso de serlo o 0 si no lo es.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
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
	int ret = ft_isalpha('a') + 48;
	write (1, &ret, 1);
	return(0);
}