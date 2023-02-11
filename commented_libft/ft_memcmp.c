/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:14:10 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:53:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                          FT_MEMCMP:
 * @brief Compares the first 'n' bytes of the memory areas pointed to by 's1' 
 * and 's2'. 
 * @param s1 A pointer to the first memory area.
 * @param s2 A pointer to the second memory area.
 * @param n  The number of bytes to compare.
 * @return Zero if the two strings are identical, otherwise it returns the 
 * difference between the first two differing bytes (treated as unsigned char).
 * @details
 * VARIABLES: two 'unsigned char' strings called 'ma1' (memory area 1) and 'ma2' 
 * (memory area 2), and a 'size_t' counter that can be compared to the prototype 
 * "size_t n". 
 * SET: 'ma1' and 'ma2' are set equal to the casted versions of 's1' and 's2' 
 * respectively, and the counter is set to 0. 
 * WHILE: a loop condition to iterate over both 'ma1' and 'ma2' only when the 
 * value of 'i' is less than the value of 'n'. IF: condition met if both strings 
 * are different. 
 * RETURN: The difference between the position of 'i' in 'ma1' and 'ma2' if all
 * the conditions are met. Otherwise, returns 0.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
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

/**                                 FT_MAIN:
 * @brief For main two strings are created to be compared and send to the 
 * function and all the 'printf' functions necessary to print the return value 
 * and check how it works.
*/
int	main(void)
{
	char s1[] = "memcmp";
	char s2[] = "memcmpft";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 7));

	return (0);
}
