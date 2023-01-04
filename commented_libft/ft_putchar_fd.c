/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:12:33 by srossatt          #+#    #+#             */
/*   Updated: 2022/12/29 15:56:31 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief sends the 'c' character to the file descriptor
 * 
 * @param c character
 * @param fd file descriptor
 * @return none
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
