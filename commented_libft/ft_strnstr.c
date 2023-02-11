/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:16:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:06:04 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_STRNSTR:
 * @brief Locates the first occurrence of the null-terminated string 'little'
 * in the string 'big', where not more than 'len' characters are searched. 
 * Characters that appear after a `\0' character are not searched.
 * @param big source string
 * @param little string to be located
 * @param len bytes length to search
 * @return If 'little' is an empty string, 'big' is returned; if 'little'
 * occurs nowhere in 'big', NULL is returned; otherwise a pointer to the
 * first character of the first occurrence of 'little' is returned.
 * @details
 * VARIABLES: two counters 'i' and 'j' of type 'size_t' that are going to be 
 * able to be compared with "size_t len". 
 * SET: 'i' is set equal to 0. 
 * IF: condition met if 'little' is empty. RETURN: 'big'. 
 * WHILE: a loop that iterates over 'big' with the help of 'i' in order to find 
 * 'little' inside. For this, the loop is set to be entered so long as 'big' 
 * exists and 'i' is less than 'len', which is the number of characters in 'big' 
 * where 'little' is searched. WHILE: loop inside the other that states that as 
 * long as the position of [i + j] in 'big' is equal to the position of 'j' 
 * iterating over 'little' and that [i + j] is less than 'len', 'j' continues
 * iterating in 'little' and in 'big'. This way, both strings are compared at 
 * the same time until a null character is reached inside 'little', which is 
 * what establishes the IF: last condition inside the loop. 
 * RETURN: The function returns a pointer to the position of 'i' in 'big' which 
 * will be equal to the first character of the occurrence of 'little' in 'big' 
 * (The loop will first advance 'i' over 'big' and then 'j' over 'little' and 
 * 'big' at the same time). ELSE: 0 is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/**                           FT_MAIN:
 * @brief the string 'big' is created to pass as an argument and a 'ret'
 * pointer that will be the return of the function. Then 'ret' is set equal 
 * to the function call passing 'big', 'little' and 'len' as arguments.
 * Finally, a printf of 'ret' is done to check the result.
 */
int	main()
{
	char big[40] = "strnstr";

	char *ret = ft_strnstr(big, "nst", 6);
	printf("%s\n", ret);

	return (0);
}
