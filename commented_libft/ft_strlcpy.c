/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:37:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:00:14 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <stdio.h> // library containing printf
#include "libft.h" // static library containing ft_strlen
/**
 * @brief Copies a null terminated 'src' string into a sized buffer 'dst'
 * 
 * @details With the strlcpy() function only 'dstsize' characters
 * maximum are copied, and the value returned is the size of 'src'.
 * The value returned is always the size of string 'src'
 * regardless of how many characters are copied.
 *
 * @param dst destination string
 * @param src source string
 * @param dstsize destination buffer size
 * @return The length of 'src'
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	/**
     * We start by creating an unsigned int counter that we need
	 * to be able to compare it to 'size_t dstsize'. We continue 
	 * creating a first condition that is made to return the length 
	 * of the source string if 0 was passed on as a argument to 
	 * 'dstsize'. The second condition will be a loop that copies
     * 'src' to 'dst' depending on the size of the destination buffer.
     * Finally, we add the NULL at the end of 'dst' and return the length
     * of 'src' as the function requests.
     */
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i]  && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/**
 * For main we start by creating two strings of type character called 'src'
 * and 'dst' to pass on as arguments to the function and be able to check
 * the results. Next we create an integer that will contain the return of
 * the function and we set it equal to the call of the function passing the
 * strings and length of 'dstsize' as arguments. Finally, we use printf to
 * print 'src' and to print the return of the function thus being able to
 * compare them.
 */
int main()
{
 char src[] = "strlcpy";
 char dst[] = "is";
 int ret;
 
 ret = ft_strlcpy(dst, src, 4);
 printf("%s\n", src);
 printf("%d", ret);
}
