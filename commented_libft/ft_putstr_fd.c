/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:13:22 by srossatt          #+#    #+#             */
/*   Updated: 2022/12/29 15:56:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief sends the 's' pointer to the file descriptor
 * 
 * @param s string
 * @param fd file descriptor
 * @return none
 */
void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
