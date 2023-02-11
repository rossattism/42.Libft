/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:12:21 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:32:33 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_MEMCHR:
 * @brief Searches for the first occurrence of the character 'c' in the first 
 * 'n' bytes of the memory area pointed to by 's'.
 * @param s A pointer to the memory area.
 * @param c The character to search for.
 * @param n The number of bytes to search.
 * @return A pointer to the first occurrence of 'c' in the memory area pointed 
 * to by 's' or a null pointer if 'c' is not found.
 * @details
 * VARIABLES: 'sc': a copy the 's' prototype that is manipulable (not constant) 
 * and of type “unsigned char”. 'i': a counter of the same type as 'n' (size_t)
 * that can be compared to 'n'. 
 * SET: the copy to the original prototype (also casted to unsigned char) is set
 * equal to its original, and 'i' is set to 0.
 * WHILE: a loop whose objective will be to traverse the copy of the string as 
 * long as the counter is less than the 'n' bytes given by the argument and thus 
 * be able to find or not the character 'c'. IF: condition met if the position 
 * of the counter in the string is equal to 'c' (this means the character was 
 * found). RETURN: a pointer to the index of the position of the counter 
 * (casted to void).
 * RETURN: If this is not true, then 'c' was not found and therefore null (0) 
 * is returned. 
 * CAST: The conversion to “unsigned char” and “void" that is performed on the 
 * function is done because its prototype contains a constant pointer [const 
 * void *s] and a memory container of type size_t [size_t n]. The pointer, 
 * being constant, cannot be modified during the function thus a copy that can 
 * be modified is created. The size_t type container has the particularity of 
 * accepting positive values only, that is why strictly positive "unsigned" 
 * types are created. The conversion is also a requirement that appears in the 
 * description of the function.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)&sc[i]);
		i++;
	}
	return (0);
}

/**                         FT_MAIN:
 * @brief For main a string is created to pass as an argument to the function 
 * and then printf is used to print the return and the function call passing 
 * the arguments to check its operation.
 */
int	main(void)
{
	char s[] = "memchr";
	printf("%s\n", ft_memchr(s, 'c', 2));
	printf("%s\n", ft_memchr(s, 'c', 5));
	return (0);
}
