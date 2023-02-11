/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:33:07 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:15:41 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_STRCHR
 * VARIABLES: 'find' is the character to find and 'i' the counter to iterate 
 * over the string.
 * WHILE: a loop that allows to iterate over the string 's' as long as it does 
 * not run into its null character. IF: condition iside this loop that is met 
 * if the position of 'i ' in 's' is equal to 'find' which is also equal to the 
 * value of 'c'. RETURN: a pointer to 's' + the current position of 'i' which 
 * will contain the first occurrence of 'c' in 's'.
 * IF: condition that is used in case that the string passed as an argument to
 * the function is equal to NULL and that is met if the position of 'i' in 's' 
 * is equal to 'find' from start. RETURN: a pointer to 's' + 'i'. 
 * RETURN: if none of the conditions are met, '0' is returned.
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
