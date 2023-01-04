/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:16:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:18:23 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <stdio.h> // library containing printf
/**
 * @brief Locates the first occurrence of the null-terminated string 'little'
 * in the string 'big', where not more than 'len' characters are searched.
 *
 * @details Characters that appear after a `\0' character are not searched.
 *
 * @param big source string
 * @param little string to be located
 * @param len bytes length to search
 * @return If 'little' is an empty string, 'big' is returned; if 'little'
 * occurs nowhere in 'big', NULL is returned; otherwise a pointer to the
 * first character of the first occurrence of 'little' is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	/**
     * We start by creating two counters 'i' and 'j' of type 'size_t' to be 
	 * able to compare them with "size_t len". We set 'i' equal to 0. 
	 * The first condition is that if 'little' is empty, 'big' is returned. 
	 * The second condition is a loop that iterates over 'big' with the help 
	 * of 'i' in order to find 'little' inside. For this, we set the loop to 
	 * be entered as long as 'big' exists and 'i' is less than 'len', which 
	 * is the number of characters in 'big' where 'little' is searched. We set 
	 * our second counter 'j' equal to 0 and then create another loop that states 
	 * that as long as the position of [i + j] in 'big' is equal to the position 
	 * of 'j' traversing 'little' and that [i + j] is less than 'len', 
	 * we advance 'j' in 'little' and in 'big'. This way, both strings will be 
	 * compared at the same time until a null character is reached inside 'little', 
	 * which is what establishes the last condition inside the loop. We then return 
	 * a pointer to the position of 'i' in 'big' which will be equal to the first 
	 * character of the occurrence of 'little' in 'big' (The loop will 
	 * first advance 'i' over 'big' and then 'j' over 'little' and 'big' at 
	 * the same time).
    */
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
/**
 * For main we create the string 'big' to pass as a argument and a 'ret'
 * pointer that will be the return of the function. We set 'ret' equal to
 * the function call passing 'big', 'little' and 'len' as arguments.
 * Finally, we do a printf of 'ret' to check the result.
 */
int	main()
{
	char big[40] = "strnstr";

	char *ret = ft_strnstr(big, "nst", 6);
	printf("%s\n", ret);

	return (0);
}
