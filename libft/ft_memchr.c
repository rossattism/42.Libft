/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:22:56 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 18:18:46 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_MEMCHR
 * The function is made up of a main condition which is a loop whose objective 
 * will be to iterate over the copy of the string as long as 'i' is less than 
 * 'n' received by value and thus be able to search for the character 'c'. If 
 * the condition that the position of 'i' in the string equals to 'c' is met, 
 * it means the character was found and a pointer to the index of the position 
 * of the counter (casted to void) is returned. If this is not true, then 'c' 
 * was not found and therefore null (0) is returned. The cast is done because 
 * its prototype contains a constant pointer and a memory container of type 
 * size_t . The pointer, being constant, cannot be modified thus a copy that 
 * can be manipulated is created. The size_t type container accepts non-negative 
 * values only, that is why strictly positive "unsigned" types are created.
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
