/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:23:55 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:40:01 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_MEMSET:
 * @brief Fills the first 'n' bytes of the memory area pointed to by 'b' with
 * the constant byte ‘c’.
 * @param b A pointer to the memory area.
 * @param c The value to be set.
 * @param n The number of bytes to be set.
 * @return A pointer to the memory area.
 * @details
 * SIZET: Using size_t ensures that the argument passed will always be a
 * non-negative number that can represent the size of the largest possible
 * object and also that the counter 'i' can be compared with 'n'.
 * CAST: Guarantees that the memory is filled with the correct value,
 * regardless of the size of the value passed as a parameter. The 'c' argument
 * is an int which may have larger size than unsigned char, by casting it to
 * unsigned char the function ensures that only the lower 8 bits of int are 
 * used which is the size of one byte.
 * WHILE: a loop that iterates over the casted version of the memory area 
 * pointed to by 'b' (unsigned char 'ma') filling the 'n' bytes of memory 
 * with the character 'c' (casted to unsigned char). Since the function needs 
 * to work on a generalized piece of memory and not just on null-terminated 
 * strings, the loop will work so long as 'i' is less than 'n'.
 * RETURN: the now modified memory area pointed to by 'b'.
 */
void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char   *ma;
	size_t          i;

	i = 0;
	ma = (unsigned char *)b;
	while (i < n)
	{
		ma[i++] = (unsigned char)c;
	}
	return (b);
}

/**                               FT_MAIN:
 * @brief Converts the function into a program making it possible to test its
 * result by passing an empty memory area as an argument and using 'strcpy'
 * to copy the string and 'puts' to print its value and the return value.
 */
int main(void)
{
	char s[30];
    strcpy(s, "memset");
	puts(s);
	ft_memset(s, 'l', 3);
	puts(s);
	return (0);
}
