/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:23:55 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:12:29 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes 'len' bytes of value 'c' to the string 'b'.
 *
 * @param b string
 * @param c int value
 * @param len length
 * @return A pointer to memory area 'b'.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = (unsigned char *)b;
	while (i < len)
	{
		ma[i++] = (unsigned char)c;
	}
	return (b);
}
