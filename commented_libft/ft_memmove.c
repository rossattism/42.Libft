/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:45:38 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 12:05:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies 'n' bytes from 'src' to 'dest' with the guarantee that the 
 * copy will work correctly even if the two memory areas overlap.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to 'dest' memory area.
 * @details
 * IF: checks whether the casted versions of 'dest' and 'src' (unsigned char 
 * *s and unsigned char *d) exist and returns 0 if they don't.
 * IF: checks whether 'd' is greater than 's', if this is true then enters 
 * a...
 * WHILE: loop that continues so long as the reverse iteration of 'n' over 
 * 's' and 'd' is greater than 0 while copying 's' to 'd'.
 * WHILE: loop that continues so long as 'i' is less than 'n' and iterates 
 * over 'd' and 's' while copying 's' into 'd'. 
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
/**                                FT_MAIN
 * @brief Tests the function by passing two strings 'd' and 's' as arguments, 
 * by using a variable that contains the return value of the function and is 
 * set equal to the function call, and by using 'printf' to print the value 
 * of this variable.
*/
int	main(void)
{
	char    d[10] = "memmove";
	char    s[10] = "is";
	char    *ret;

	ret = ft_memmove(d, s, 2);
	printf("%s", ret);
	return (0);
}
