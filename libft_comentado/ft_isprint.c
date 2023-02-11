/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:08:47 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:18:27 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISPRINT:
 * @brief Verifica si el carácter 'c' (pasado como integer) es imprimible.
 * @param c El carácter a verificar.
 * @return 1 si es imprimible, 0 si no lo es.
 * @details
 * IF: condición que verifica si 'c' es un carácter imprimible y que devuelve
 * 1 en caso de serlo o 0 en caso de no serlo.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	int ret = ft_isprint('\n') + 48;
	write (1, &ret, 1);
	return(0);
}
