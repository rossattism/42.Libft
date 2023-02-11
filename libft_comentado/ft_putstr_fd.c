/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:40:38 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:41:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTSTR_FD:
 * @brief Envía el string 's' al file descriptor especificado
 * @param s El string a enviar.
 * @param fd El file descriptor sobre el que escribir.
 * @return Ninguno.
 * @details
 * WRITE: Función que imprime 's' en el file descriptor recibido por valor.
 * 'ft_strlen' es utilizado para saber los bytes necesarios para imprimir
 * cualquier string recibida.
**/
void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
