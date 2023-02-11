/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:45:41 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_MEMCPY
 * VARIABLES: 's': casted version of 'dest'; 'd': casted version of 'src'; i:
 * counter to iterate over the strings.
 * IF: checks whether 's' and 'd' exist and returns 0 if they don't.
 * WHILE: a loop that continues so long as 'i' is less than the received value 
 * of 'n', and its job is iterating over both 'd' and 's' while copying 'n' 
 * values of 's' in 'd'. 
 * RETURN: a pointer to the modified 'dest'. 
 * INFO: By using size_t, the function allows 'i' to be compared to 'n' and 
 * guarantees that 'n' will always be a non-negative number that can represent 
 * the size of the largest possible object. The cast guarantees that the 
 * operation on pointer 's' and 'd' will be performed on bytes level and not 
 * on a larger level.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	d = dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
