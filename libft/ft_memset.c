/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:23:55 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:39:04 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_MEMSET
 * WHILE: a loop that iterates over the casted version of 'ma' and fills its 
 * first 'n' bytes with 'c'. It continues so long as 'i' is less than the value
 * received by 'n', because the function needs to work on a general piece of
 * memory, not just a NULL terminated string. 
 * RETURN: It will be a pointer to 'b' that will contain the new 'n' bytes 
 * filled with 'c'. 
 * SIZET: Ensures that the argument passed to 'n' will always be a non-negative 
 * number that can represent the size of the largest possible object, and that 
 * 'i' can be compared with 'n'.
 * CASTING: Guarantees that 'ma' is filled with the correct value, regardless 
 * of the size of the value passed as a parameter. The 'c' argument is an int 
 * which may have larger size than unsigned char, by casting it to unsigned char 
 * the function ensures that only the lower 8 bits of int are used which is the 
 * size of one byte.
 */

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = (unsigned char *)b;
	while (i < n)
	{
		ma[i++] = (unsigned char)c;
	}
	return (b);
}
