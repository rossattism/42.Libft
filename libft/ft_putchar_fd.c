/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:12:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:32:43 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTCHAR_FD:
 * BRIEF: This function prints 'c' in a file descriptor
 * WRITE: function that prints 'c' in the file descriptor received by value. 
 * FD: a file
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
