/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:44:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:02:33 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <string.h> // library containing strncpy
#include <stdio.h> // library containing printf and puts
#include "libft.h" // static library containing ft_strlen
/**
 * @brief Appends string 'src' to the end of 'dst' and depends on 'dstsize'.
 *
 * @details The strlcat() function offers the argument 'dstsize' which
 * sets the length of the destination string, effectively equal to 
 * its buffer size.
 *
 * @param dst destination string
 * @param src source string
 * @param dstsize destination buffer length
 * @return The combined length of 'src' and 'dst'.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	/**
     * We start by creating four size_t variables to be compared
     * with the prototype 'size_t dstsize': two counters called 'i'
     * and 'j' and two containers of the length of 'dst' and 'src'
     * called 'dstlen' and 'srclen'. Then we set 'srclen' and 'dstlen'
     * equal to the length of each string with the help of the function
     * ft_strlen, and we set 'i' to 0 and 'j' to the length of 'dst' that
     * will be now cointained in 'dstlen'.
    */
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	/**
     * Next we create a condition that allows to concatenate 'src' to 'dst'
     * if the length of 'dst' is lesser than 'dstsize -1' and only when
     * 'dstsize' is greater than 0. For the loop we create the condition that
     * allows the counter 'i' to iterate over 'src' and 'j' to iterate over
     * 'dst' always taking into account that 'dstlen + i ' must be lesser than
     * 'dstsize -1'. Then we add the final NULL characters to 'dst', and we
     * create another condition that simply equals 'dstlen' to 'dstsize' when
     * 'dstlen' is greater or equal than 'dstsize'. Finally the function will
     * return 'dstlen' + 'srclen' that will be the total length of the new
     * combined string.
    */
	if (dstlen < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dstlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
/**
* For main we create 4 strings: two are the 'src' and 'dst' used to
* check our function, and the other two are the copies of these strings
* to check the original function and thus compare ours with the original.
* Next we create two variables that will contain the returns of both our
* function and the original and we set them to be equal to the calls of the
* functions passing the strings we created and the same length for 'dstsize'
* in both cases. Next we use printf and puts to print the original values of
* the strings 'src' and 'dst', next we use strncpy to copy 'src' in 'dst' to
* to print the new combined string with printf that will be the example we
* can use to see if the length result of both the original and copy functions
* are what we want them to be. Finally, we print the results of each function,
* and we check if they are equal.
*/
int main()
{
    char src[] = "strlcat";
    char dst[] = "isthestrlcat";
    char src1[] = "strlcat";
    char dst1[] = "isthestrlcat";
    int ret;
    int ret1;
 
    ret = ft_strlcat(dst, src, 4);
    ret1 = strlcat(dst1, src1, 4);
    printf("src: ");
    puts(src);
    printf("dst: ");
    puts(dst);
    strncpy(dst, src, 4);
    printf("src + dst: ");
    puts(dst);
    printf("ft_strlcat len: %d\n", ret);
    printf("strlcat len: %d", ret1);
}
