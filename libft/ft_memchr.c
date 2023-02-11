/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:22:56 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:19:28 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_MEMCHR
 * VARIABLES: 'ma': the memory area to be modified, i: the counter to traverse
 * the memory, and 'c': the character to find.
 * WHILE: a loop whose objective will be to iterate over the copy of the string 
 * as long as 'i' is less than 'n' received by value and thus be able to search 
 * for the character 'c'. IF: condition that is met if the position of 'i' in 
 * the string is equal to 'c', and it means the character was found. RETURN: a 
 * pointer to the index of the position of the counter (casted to void). 
 * RETURN: If this is not true, then 'c' was not found and therefore null (0) 
 * is returned. 
 * CAST: The cast is done because its prototype contains a constant pointer 
 * and a memory container of type size_t . The pointer, being constant, cannot 
 * be modified thus a copy that can be manipulated is created. 
 * SIZET: The size_t type container accepts non-negative values only, that is 
 * why strictly positive "unsigned" types are created.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ma;
	size_t			i;

	ma = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ma[i] == (unsigned char)c)
			return ((void *)&ma[i]);
		i++;
	}
	return (0);
}
