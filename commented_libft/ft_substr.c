/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:12:35 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 14:16:12 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_SUBSTR:
 * @brief Allocates memory (with malloc) for a substring of 's' that starts from 
 * index 'start' and has a maximum length of 'len'.
 * @param s The string where to create the substring.
 * @param start The index of 's' where to start the substring.
 * @param len The maximum length of the substring.
 * @return A pointer to the new substring. 
 * @details                                 
 * VARIABLES: 'subs': the pointer to the substring returned by the function.
 * IFONE: checks whether 's' exists and returns null to secure the function.
 * IFTWO: checks whether the size of 's' is less than the value of 'start'
 * and returns an empty string made by 'ft_strdup'.
 * IFTHREE: checks whether the size of 's' subtracting 'start' is less than
 * the value of 'len' and sets 'len' equal to the size of 's' subtracting 
 * 'start'.
 * MALLOC: malloc is used to allocate memory that will have a size of chars 
 * (the bytes for a string), multiplied by the size of 'len' (the maximum size 
 * the substring can have) plus 1 (the final null character).  
 * IF: checks if the allocation was a success and secures the function.
 * MEMCPY: The function 'ft_memcpy' is used to create the new substring.
 * RETURN: after a null character is added at the end, a pointer to 'subs' is 
 * returned.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	ft_memcpy(subs, s + start, len);
	subs[len] = '\0';
	return (subs);
}

/**                               FT_MAIN
 * For main a pointer is created and set equal to the call of the function 
 * to be equivalent to the substring created. Values to 's', 'start' and 
 * 'len' are passed to the function and then 'printf' is used to print the 
 * result.
*/
int	main()
{
	char	*subs;

	subs = ft_substr("ft_substr", 4, 6);
	printf("%s\n", subs);
	return (0);
}
