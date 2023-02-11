/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:33:07 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:23:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRCHR:
 * @brief Searches for the first occurrence of the character 'c' in the 
 * null-terminated string pointed to by 's'.
 * @param s The pointer to the null-terminated string.
 * @param c The character to search for.
 * @return A pointer to first occurrence of 'c' in 's' or a NULL pointer if 'c' 
 * is not found.
 * @details
 * VARIABLES: 'find' that will be in charge of finding 'c' in the string, and a 
 * counter 'i' that will help traverse 's'.
 * CAST: 'find' is set equal to the character 'c' casted to 'unsigned char' and 
 * the counter 'i' is intilized to 0.
 * WHILE: a loop that allows to iterate over the string 's' as long as it does
 * not run into its null character. IF: condition iside this loop that is met
 * if the position of 'i ' in 's' is equal to 'find' which is also equal to the
 * value of 'c'. RETURN: a pointer to 's' + the current position of 'i' which
 * will contain the first occurrence of 'c' in 's'.
 * IF: condition that is used in case that the string passed as an argument to
 * the function is equal to NULL and that is met if the position of 'i' in 's'
 * is equal to 'find' from start. RETURN: a pointer to 's' + 'i'.
 * RETURN: if none of the conditions are met, '0' is returned. * 
*/
char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}

/**                              FT_MAIN:
 * @brief For main a string that will be used as an argument is created to
 * check if the function is correct. Printf is used to print the original string
 * and the character to find. A constant pointer 's1' is matched to the function
 * call by passing the string created and the character to find as arguments. 
 * Then the new string that points to 'c' is printed or else 0.
*/
int	main(void)
{
	const char	*s1;
	char s[] = "strchr";

	printf("s: %s\nc: %c\n", s, 'h');
	s1 = ft_strchr(s, 'h');
	if (s1)
		printf("return: %s\n", s1);
	else
		printf("return: \n");
	return (0);
}
