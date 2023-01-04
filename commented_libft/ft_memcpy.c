/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:56:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <stdio.h> // library containing printf
/**
 * @brief Copies 'n' bytes from 'src' to 'dst'.
 *
 * @param dst destination string
 * @param src source string
 * @param n bytes length
 * @return A pointer to 'dst'.
 */
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /**
	 * We start by making a counter. Because we will be doing our loop only
     * as long as we are lesser than the given size_t 'n', we want to make 
	 * sure we make our counter variable a size_t as well so we can compare it 
	 * to 'n'. Next we make two unsigned char copies of 'dst' and 'src'. 
	 * We set our counter to 0 and we cast our given argument strings into 
	 * unsigned char and place them inside our copies.
     */
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
    /**
     * The first condition is done to return 0 when 'd' and 's' are not 
	 * given as arguments and prevents the function to break. Then we start 
	 * a loop with the condition that so long as our counter 'i' is lesser 
	 * than the given 'n' bytes the loop continues copying these bytes from 
	 * the memory area of 'src' to the memory area of 'dst'. Finally, we 
	 * return 'dst' that is now modified.
     */
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/**
 * For main we create a 'd' and 's' string to use as arguments for the 
 * function, and we also create a pointer named 'ret' that will contain 
 * the return. We equal 'ret' to the call of ft_memcpy passing the 
 * arguments to the function and then we use printf to print the return 
 * that will be 'dst' modified by ft_memcpy.
*/
int main(void)
{
   char d[30];
   char s[30] = "memcpy";
   char *ret;
 
   ret = ft_memcpy (d, s, 2);
   printf ("%s", ret);
   return (0);
}
