/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:32:21 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 18:02:30 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRRCHR
 * The function is made up of a first condition that is a loop that uses 'i' to 
 * iterate over the string, a second condition that is a loop that repeats as 
 * long as 'i' is greater than or equal to 0 and that inside has another 
 * condition that if the position of the counter in the string is equal to 
 * 'find', that is, equal to the searched character, then 'i' does a reverse 
 * iteration over 's' and the function returns a 's' + 'i' pointer. Finally, if 
 * 'c' is not found, null is returned.
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
