/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:23:55 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:52:38 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <string.h> // library containing strcpy
#include <stdio.h> // library containing puts
/**
 * @brief Writes 'len' bytes of value 'c' (converted to an unsigned char) 
 * to the string 'b'.
 *
 * @param b string
 * @param c int value
 * @param len length of bytes
 * @return A pointer to memory area 'b'.
 */
void	*ft_memset(void *b, int c, size_t len)
{
    /**
     * We start by creating a copy of void *b that will be
     * unsigned char and compatible with size_t. Then we
     * create a counter that will be size_t like 'len'.
     * We continue initializing the counter to 0 and making
     * 'ma' equal to a casted version of 'b' that has to be
     * also unsigned char in order to be compatible with 'ma'.
     */
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = (unsigned char *)b;
    /**
     * The function needs to work on a general piece of memory,
     * not just a NULL terminated string, so we cannot have our
     * loop based on the usual idea that we will reach the end
     * of a string. The loop's condition is that so long 'i' is
     * less than 'len' (meaning len - 1), 'i' will iterate over
     * the string 'ma' and will be equal to a casted unsigned char
     * 'c'. Finally, we return a pointer to 'b' that will now contain
     * the new 'len' bytes changed to 'c'.
    */
	while (i < len)
	{
		ma[i++] = (unsigned char)c;
	}
	return (b);
}
/**
 * For main we create a string 's' to be passed as a argument. We use
 * strcpy to copy the string we want to modify with ft_memset. Then we
 * use puts to print the string we copied with strcpy without any changes.
 * We continue calling to ft_memset with any arguments we choose.
 * Finally, we use puts once more to print again the string 's' but with
 * the changes done with ft_memset. We can now contrast string 's' before
 * and after the function was called.
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
