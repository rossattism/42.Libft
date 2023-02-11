/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendfl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:40:30 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:40:48 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTENDL_FD:
 * BRIEF: This function writes the string s to the file descriptor fd followed 
 * by a '\n' to make a new line. 
 * IF: condition met if 's' does not exist or if 'fd' is less than 0 to handle 
 * errors. RETURN: nothing.
 * WRITE: function that prints 's' in the file descriptor received by value. 
 * 'ft_strlen' is used to know the bytes needed to print any string received.
 * WRITE: function that prints the new line in the same file descriptor.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
