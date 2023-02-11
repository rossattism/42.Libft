/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:32:21 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:26:01 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRRCHR:
 * @brief Searches for the last occurrence of a character 'c' in the
 * null-terminated string pointed to by 's'.
 * @param s The pointer to the null-terminated string.
 * @param c The character to search for.
 * @return A pointer to last occurrence of 'c' in the string pointed to by 's'
 * and a NULL pointer if 'c' is not found.
 * @details
 * VARIABLES: 'find' is the character to find and 'i' the counter to iterate 
 * over the string 's'.
 * CAST: 'find' is set equal to the character 'c', casted to 'unsigned char', 
 * and the counter 'i' is set to 0.
 * WHILE: a loop that uses 'i' to iterate over the string. 
 * WHILE: a loop that repeats as long as 'i' is greater than or equal to 0. 
 * IF: condition met if the position of the counter in the string is equal to 
 * 'find', that is, equal to the searched character. RETURN: the 's' + 'i' 
 * pointer. Inside this WHILE 'i' will go backwards, starting from front to 
 * back in the string. 
 * RETURN: if 'c' is not found, null is returned.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/**                            FT_MAIN:
 * @brief For main a string that will be used as an argument is created to 
 * check if the function is correct. Printf is used to print the original 
 * string and the character to find. A constant pointer 's1' is matched to 
 * the function call by passing the string created and the character to find 
 * as arguments to the function. Then the new string that points to 'c' is
 * printed or else 0 is printed.
*/
int	main(void)
{
	char s[] = "strrchr";
	const char* s1;

	printf("s: %s\nc: %c\n", s, 'r');
	s1 = ft_strrchr(s, 'r');
	if (s1)
		printf("return: %s\n", s1);
	else
		printf("return: \n");
	return (0);
}
