/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:44:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:17:16 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Appends string 'src' to the end of 'dst' and depends on 'dstsize'.
 *
 * @details The strlcat() function offers the argument 'dstsize' which
 * sets the length of the destination string, effectively equal to 
 * its buffer size.
 *
 * @param dst destination string
 * @param src source string
 * @param dstsize destination buffer length
 * @return The combined length of 'src' and 'dst'.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	if (dstlen < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dstlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
