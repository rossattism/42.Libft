/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:14:10 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:15:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <stdio.h> // library containing printf
/**
 * @brief Compares the first 'n' bytes of the memory areas 's1' and 's2'.
 *
 * @details The memcmp() function compares byte string 's1' against byte
 * string 's2'. Both strings are assumed to be 'n' bytes long. It returns
 * zero if the two strings are identical, otherwise it returns the
 * difference between the first two differing bytes (treated as unsigned char).
 * Zero-length strings are always identical.
 *
 * @param s1 string 1
 * @param s2 string 2
 * @param n bytes length
 * @return An integer less than 0 if (s1 < s2), equal to 0 if (s1 = s2),
 * or greater than 0 if (s1 > s2). If 'n' is 0, the return value is 0.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	/**
     * We start by creating two 'unsigned char' strings called 'ma1'
     * (memory area 1) and 'ma2' (memory area 2), and a 'size_t' counter
     * that can be compared to the prototype "size_t n". Then we set 'ma1'
     * and 'ma2' equal to the casted versions of 's1' and 's2' respectively,
     * and we set the counter to 0. Next we create a condition to iterate
     * over both 'ma1' and 'ma2' only when the value of 'i' is lesser than
     * the value of 'n', and if both strings are different. If that is true,
     * the function returns de difference between the position of 'i'
     * in 'ma1' and 'ma2'. Otherwise, returns 0.
    */
	unsigned char	*ma1;
	unsigned char	*ma2;
	size_t			i;

	ma1 = (unsigned char *)s1;
	ma2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ma1[i] != ma2[i])
			return (ma1[i] - ma2[i]);
		i++;
	}
	return (0);
}
/**
 * For main we create two strings to compare and send to the function and all
 * the printfs we think are necessary to print the return value of the function
 * and check that it works.
*/
int	main(void)
{
	char s1[] = "memcmp";
	char s2[] = "memcmpft";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 7));

	return (0);
}
