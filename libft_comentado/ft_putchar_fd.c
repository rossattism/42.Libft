/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:35:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:36:43 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_PUTCHAR_FD:
 * @brief Envía el caracter 'c' al file descriptor especificado
 * @param c El caracter a enviar.
 * @param fd El file descriptor sobre el que escribir.
 * @return Ninguno.
 * @details
 * WRITE: Función que imprime 'c' en el file descriptor recibido por argumento. 
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
