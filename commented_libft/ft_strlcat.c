/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:44:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 13:49:59 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRLCAT:
 * @brief It concatenates the null-terminated string pointed to by 'src' 
 * to the end of the null-terminated buffer pointed to by 'dest', ensuring 
 * that the destination buffer is always null-terminated and that the string 
 * is not truncated.
 * @param dest A pointer to the destination buffer.
 * @param src A pointer to the source string.
 * @param size The size of the destination buffer.
 * @return The combined length of 'src' and 'dest', not including the null 
 * terminator.
 * @details
 * VARIABLES: 'i': a counter that iterates over 'src'; 'j': a counter that 
 * iterates over 'j' and is set equal to the length of dest; 'destlen': to
 * be equal to the length of 'dest'; and 'srclen': to be equal to the length
 * of 'src'.
 * IF: condition that allows to concatenate 'src' to 'dst' if the length of 
 * 'dst' is lesser than 'dstsize -1' and only when 'dstsize' is greater than 0. 
 * WHILE: a loop that allows the counter 'i' to iterate over 'src' and 'j' to 
 * iterate over 'dst' always taking into account that 'dstlen + i ' must be 
 * less than 'dstsize -1'. 
 * NEXT: After the while, the final NULL characters are added to 'dst'
 * IF: simply equals 'dstlen' to 'dstsize' when 'dstlen' is greater or equal 
 * than 'dstsize'. 
 * RETURN: 'dstlen' + 'srclen' that will be the total length of the new combined 
 * string.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
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
/**                           FT_MAIN:
 * @brief Main tests the function using four variables 'src', 'dst', 'src1' 
 * and 'dst1' that are the copies of the first two strings, and another two 
 * variables that will contain the returns of both the created function and 
 * the original. Those last variables are set equal to the call of the 
 * functions passing the strings created and the same length for 'dstsize' 
 * in both cases. Next, printf and puts are used to print the original 
 * values of the strings 'src' and 'dst', then strncpy to copy 'src' in 'dst' 
 * to print the new combined string with printf that will be the example used 
 * to see if the length result of both the original and copy functions are 
 * what are meant to be. Finally, the results of each function are printed to 
 * check if they are equal.
 */
int	main()
{
	char src[] = "strlcat";
	char dst[] = "isthestrlcat";
	char src1[] = "strlcat";
	char dst1[] = "isthestrlcat";
	int	ret;
	int	ret1;

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
