/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:45:38 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 15:13:57 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_MEMMOVE
 * The function has two conditions: the first one checks whether 's' and 'd' 
 * exist and returns 0 if they don't; the second one checks whether 'd' is 
 * greater than 's', if this is true then enters a loop that continues so long 
 * as the reverse iteration of 'n' over 's' and 'd' is greater than 0 while 
 * copying 's' into 'd', if this is not true then enters a loop that continues 
 * so long as 'i' is less than 'n' and iterates over 'd' and 's' while copying 
 * 's' into 'd'. The function returns a pointer to 'dest'.
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
