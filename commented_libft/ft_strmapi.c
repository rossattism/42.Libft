/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:23:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 14:34:16 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRMAPI
 * @brief Applies the function 'f' to each character in a string 's' giving 
 * the index of each character in 's' and the character itself as parameters. 
 * Generates a new string with the result of the successive use of the 
 * function.
 * @param s The string to iterate.
 * @param f The function to apply in each character.
 * @return The string created after using 'f' in each character correctly or 
 * NULL if the memory allocation fails.
 * @details
 * VARIABLES: 'i' is the counter that iterates over the string, 'len' is the
 * size of the string necessary to allocate memory and 'str' is the string to
 * be returned.
 * IF: returns NULL when there's no value received for 's' or 'f'.
 * MALLOC: allocates the memory necessary to make a copy of the modified 
 * string we want to return. The size will be 'len' plus one 1 to compensate 
 * for the terminating '\0'. NULL is returned when the allocation fails.
 * WHILE: iterates over the string while applying 'f' to each character in
 * the string 's'.
 * RETURN: after adding the null-terminator, the new string is returned.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**                            FT_TEST
 * @brief Tests if the function orks using an example of function 'f' to
 * apply to the string. Two strings are used, one to send as an argument
 * and another to be used as a return.
 */
char	f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int	main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_striteri(str1, *f);
	printf("%s\n", str2);
}
