/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:37:33 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 13:17:09 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                          FT_STRLCPY
 * @brief Copies 'size' characters of the null-terminated string pointed to by
 * 'src' to the buffer pointed to by 'dest', ensuring that the destination
 * buffer is always null-terminated and that the string is not truncated.
 * @param dest The pointer to the destination buffer.
 * @param src The pointer to the source string.
 * @param size The size of the destination buffer.
 * @return It is always the length of 'src', without including the null
 * terminator.
 * @details
 * IF: condition that checks whether the received value of 'size' is equal to
 * 0 and returns the length of 'src' if true.
 * WHILE: loop that iterates over 'dest' and 'src' while copying 'src' into
 * 'dest' so long as 'src' exists and the counter 'i' is less than the 
 * received value of 'size' -1 (the null-terminator).
 * RETURN: the last value of 'dest' is set to NULL and the length of 'src'
 * is returned.
 * FT_STRLEN: subfunction used to calculate the length of the received value
 * of 'src'.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/**                            FT_MAIN:
 * @brief Tests the function by passing two strings 'd' and 's' as arguments,
 * by using a variable that is set equal to the function call, and by using
 * 'printf' to print the value of 's' and 'ret' for comparison.
 */
int	main(void)
{
	char s[] = "strlcpy";
	char d[] = "is";
	int ret;
	ret = ft_strlcpy(d, s, 4);
	printf("%s\n", s);
	printf("%d", ret);
	return (0);
}
