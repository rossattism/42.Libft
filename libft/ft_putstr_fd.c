/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:13:22 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:56:16 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTSTR_FD
 * WRITE: function that prints 's' in the file descriptor received by value. 
 * 'ft_strlen' is used to know the bytes needed to print any string received.
 */

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
