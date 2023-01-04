/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:32:33 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies 'n' bytes from 'src' to 'dst'.
 *
 * @param dst destination string
 * @param src source string
 * @param n bytes length
 * @return A pointer to 'dst'.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*s;
	unsigned char	*d;
	size_t			i;

	d = dst;
	s = src;
	i = 0;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
