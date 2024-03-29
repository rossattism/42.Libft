/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:37:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 13:27:17 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRLCPY
 * IF: checks whether the received value of 'size' is equal to 0 and returns 
 * the length of 'src' if true.
 * WHILE: loop that iterates over 'dest' and 'src' while copying 'src' into 
 * 'dest' so long as 'src' exists and the counter 'i' is less than the 
 * received value of 'size' -1 (without the null-terminator). 
 * RETURN: It then sets the last value of 'dest' to NULL and returns the 
 * length of 'src' using 'ft_strlen' to calculate it.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
