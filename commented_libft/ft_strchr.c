/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:33:07 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:07:58 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // library containing printf
/**
 * @brief Searches for the first occurrence of a character 'c' in a string 's'.
 *
 * @param s string
 * @param c character to find
 * @return A pointer to first occurrence of 'c' in 's'
 * and NULL if 'c' doesn't exist in 's'.
 */
char	*ft_strchr(const char *s, int c)
{
	/**
     * We start by creating a variable that we will call 'find' that will
     * be in charge of finding 'c' in the string, and a counter 'i' that
     * will help us traverse 's'. We then set 'find' equal to the character
     * 'c' casted to 'unsigned char' and the counter 'i' to 0.
     */
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	/**
     * We will have two main conditions in the function: the first is a loop
     * that allows us to iterate over the string 's' as long as it does not run
     * into its null character and which will, in turn, have another condition
     * that is met if the position of 'i ' in 's' is equal to 'find' which is
     * laso equal to the value of 'c', the function then returns the pointer to
     * 's' + the current position of 'i' which will contain the first occurrence
     * of 'c' in the string; the second condition is that if the position of 'i'
     * in 's' is equal to 'find' from start then it simply returns the pointer
     * to 's' + 'i' which will be the equivalent of the first occurrence of 'c'
     * in the string. The condition is used in case that the string passed
     * as a argument is equal to null. Finally, if none of this is true,
     * the function returns '0'.
    */
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
/**
 * For main we create a string that will be used as an argument to check if
 * the function is correct. We use printf to print our original string and
 * the character to find. We match a constant pointer 's1' to the function
 * call by passing the string we created and the character to find as arguments.
 * Then we print the new string that points to 'c' or else we print 0.
*/
int	main(void)
{
	char s[] = "strchr";
	const char* s1;

	printf("s: %s\nc: %c\n", s, 'h');
	s1 = ft_strchr(s, 'h');
	if (s1)
		printf("return: %s\n", s1);
	else
		printf("return: \n");
	return (0);
}
