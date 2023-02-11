/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:45:38 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 12:57:48 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_MEMMOVE
 * VARIABLE: 's': the casted version of 'src'; 'd': the casted version of 
 * 'dest'
 * IF: checks whether 's' and 'd' exist and returns 0 if they don't
 * IF: checks whether 'd' is greater than 's', if this is true then enters a 
 * WHILE: loop that continues so long as the reverse iteration of 'n' over 's' 
 * and 'd' is greater than 0 while copying 's' to 'd'
 * ELSE: if this is not true then enters a loop that continues so long as 'i' 
 * is less than 'n' and iterates over 'd' and 's' while copying 's' into 'd'. 
 * RETURN: a pointer to 'dest'.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
