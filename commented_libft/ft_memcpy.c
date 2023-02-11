/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:47:46 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_MEMCPY:
 * @brief Copies 'n' bytes from the memory area pointed to by 'src' to the
 * memory area pointed to by 'dest'.
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area.
 * @details
 * CAST: Guarantees that the memory is filled with the correct value,
 * regardless of the size of the value passed as a parameter. The 'c' argument
 * is an int which may have larger size than unsigned char, by casting it to
 * unsigned char the function ensures that only the lower 8 bits of int are used
 * which is the size of one byte.
 * SIZET: Using size_t ensures that the argument passed will always be a
 * non-negative number that can represent the size of the largest possible
 * object and making it possible to compare the counter 'i' with 'n'.
 * IF: checks for the existence of the casted versions of 'dest' and 'src' and
 * returns 0 if they do not exist.
 * WHILE: a loop that continues as long as the counter is less than the
 * received value of 'n' and that iterates over both 'd' and 'i' while copying
 * the 'n' bytes from 's' into 'd'.
 * RETURN: the pointer to the destination memory area 'dest' which is now
 * modified.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
 
	d = (unsigned char *)dest;
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

/**                               FT_MAIN:
 * @brief Converts the function into a program making it possible to be tested 
 * by passing two strings 'd' and 's' as arguments, by using a variable that 
 * contains the return value of the function and is set equal to the function 
 * call, and by using 'printf' to print the value of this variable.
*/
int main(void)
{
	char d[10];
	char s[10] = "memcpy";
	char *ret;
	ret = ft_memcpy (d, s, 2);
	printf ("%s", ret);
	return (0);
}
