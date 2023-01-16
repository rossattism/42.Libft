/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:33:07 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 17:52:43 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRCHR
 * The function is made up of two main conditions: the first one is a loop that 
 * allows to iterate over the string 's' as long as it does not run into its 
 * null character and which will, in turn, have another condition that is met if 
 * the position of 'i ' in 's' is equal to 'find' which is also equal to the 
 * value of 'c', the function then returns a pointer to 's' + the current 
 * position of 'i' which will contain the first occurrence of 'c' in the string; 
 * the second condition is that if the position of 'i' in 's' is equal to 'find' 
 * from start then it simply returns a pointer to 's' + 'i'. The condition is 
 * used in case that the string passed as an argument is equal to null. Finally, 
 * if none of this is true, the function returns '0'.
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
