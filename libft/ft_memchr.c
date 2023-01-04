/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:22:56 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:24:03 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Searches for the first occurrence of a character 'c'
 * in the first 'n' bytes given of a string 's'.
 *
 * @param s string
 * @param c character to be found in string
 * @param n length of bytes
 * @return A pointer to the first occurrence of 'c' in 's'
 * or NULL if 'c' is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)&sc[i]);
		i++;
	}
	return (0);
}
