/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:32:21 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:09:54 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <stdio.h> // library containing printf
/**
 * @brief Searches for the last occurrence of a character 'c' in a string 's'
 *
 * @param s string
 * @param c character to be found in string
 * @return A pointer to last occurrence of 'c' in 's'
 * and NULL if 'c' is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	/**
     * We start by creating a variable called 'find' that will
     * be in charge of finding 'c' in the string, and a counter 'i' that
     * will traverse 's'. We then set 'find' equal to the character
     * 'c', casted to 'unsigned char', and the counter 'i' to 0.
     */
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	/**
     * We continue by creating a first condition that will be a loop that
     * uses 'i' to iterate over the string. Then we create another loop
     * that repeats as long as 'i' is greater than or equal to 0 and that
     * inside has the condition that if the position of the counter in the
     * string is equal to 'find', that is, equal to the searched character,
     * then return the 's' + 'i' pointer. Inside this last loop 'i' will go
     * backwards, starting from front to back in the string. Finally, if
     * 'c' is not found, null is returned.
    */
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
/**
 * For main we create a string that will be used as an argument to check if
 * the function is correct. We use printf to print our original string and
 * the character to find. We match a constant pointer 's1' to the function
 * call by passing the string we created and the character to find as arguments.
 * Then we print the new string that points to 'c' or else we print 0.
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
