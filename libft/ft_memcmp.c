/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:26:16 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:44:58 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_MEMCMP
 * WHILE: a condition that iterates over both 'ma1' and 'ma2' only when the 
 * value of 'i' is less than the value of 'n'. IF: condition met if both strings 
 * are different. RETURN: the difference between the position of 'i' in 'ma1' 
 * and 'ma2'. 
 * RETURN: 0 if the other conditions are not met. 
 * CAST: The cast is required to ensure the function is comparing the correct 
 * data types, the type void cannot be compared.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ma1;
	unsigned char	*ma2;
	size_t			i;

	ma1 = (unsigned char *)s1;
	ma2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ma1[i] != ma2[i])
			return (ma1[i] - ma2[i]);
		i++;
	}
	return (0);
}
