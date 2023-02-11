/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:01:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:42:27 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_BZERO
 * VARIABLES: unsigned char 'ma': a casted version of the memory area pointed 
 * to by 's' and 'i': the counter to iterate over the string.
 * WHILE: loop that iterates over and fills its first 'n' bytes with '0'. It 
 * continues so long as 'i' is less than the received value of 'n'. 
 * RETURN: does not return a value. 
 * SIZET: size_t ensures that the argument passed to 'n' will always be a 
 * non-negative number and that 'i' can be compared with 'n'.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = s;
	while (i < n)
	{
		ma[i++] = 0;
	}
}
