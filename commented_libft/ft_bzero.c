/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:01:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:53:06 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Turns the first 'n' bytes of 's' to NULL.
 *
 * @param s string to be modified
 * @param n length of bytes
 * @return None.
 */
void	ft_bzero(void *s, size_t n)
{
    /**
     * We start by creating a copy 'ma' of void *s that will be
     * unsigned char and compatible with size_t. Then we
     * create a counter that will be size_t like 'n'. We
     * continue initializing the counter to 0 and making 'ma'
     * equal to 's'.
     */
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = s;
    /**
     * Same as ft_memset, the loop's condition is that so long 'i'
     * is less than 'n' (meaning n - 1), 'i' will iterate over
     * the string 'ma' and this time will be equal to 0. This
     * function doesn't have a return.
    */
	while (i < n)
	{
		ma[i++] = 0;
	}
}
