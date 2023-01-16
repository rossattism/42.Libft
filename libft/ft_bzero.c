/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:01:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 15:08:52 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_BZERO
 * The function has a loop that iterates over the casted version of the memory
 * area pointed to by 's' (unsigned char *ma) and fills its first 'n' bytes with 
 * '0'. This loop continues so long as 'i' is less than the received value of 
 * 'n'. The function does not return a value. The use of size_t ensures that the 
 * argument passed to 'n' will always be a non-negative number and that 'i' can 
 * be compared with 'n'.
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
