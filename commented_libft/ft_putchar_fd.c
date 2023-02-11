/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:12:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:36:57 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_PUTCHAR_FD:
 * @brief Sends 'c' to the file descriptor.
 * @param c The character to send.
 * @param fd The file descriptor.
 * @return None.
 * @details
 * WRITE: function that prints 'c' in the file descriptor received by value. 
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
