/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:07:53 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:06:58 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_ISDIGIT:
 * @brief Verifica si el carácter 'c' (pasado como integer) es dígito.
 * @param c El carácter a verificar.
 * @return 1 si es dígito, 0 si no lo es.
 * @details
 * IF: condición que verifica si 'c' es un carácter numérico y devuelve 1 en
 * caso de serlo o si no 0.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**                                FT_MAIN:
 * @brief Comprueba que la función sea correcta por medio de una variable
 * integer 'ret' que contiene el valor devuelto y que es igualada al llamado
 * de la función con los argumentos pasados. El valor devuelto es convertido
 * a carácter sumando 48 para poder ser impreso por write.
 */
int	main(void)
{
	int ret = ft_isdigit('1') + 48;
	write (1, &ret, 1);
	return(0);
}
