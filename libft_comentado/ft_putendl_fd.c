/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:43:50 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:45:58 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTENDL_FD:
 * @brief Escribe el string 's' en el file descriptor 'fd' seguido de un '\n' 
 * para crear un salto de línea. 
 * @param s El string a escribir en el file descriptor.
 * @param fd El file descriptor.
 * @details
 * IF: condición que se cumple si 's' no existe o si 'fd' es menor que 0 para
 * evitar errores. RETURN: nada.
 * WRITE: Función que imprime 's' en el file descriptor recibido por valor.
 * 'ft_strlen' es utilizado para saber los bytes necesarios para imprimir
 * cualquier string recibida.
 * WRITE: function que imprime la nueva línea en el mismo file descriptor.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
