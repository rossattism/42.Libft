/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:33:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/23 13:43:35 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_STRJOIN
 * NEWSTR: variable that will be equal to the call of malloc that is used to 
 * allocate memory for the new string and that will have a size of characters 
 * (the bytes for a string), multiplied by the 'newstrlen' plus 1 (the final 
 * null character).
 * NEWSTRLEN: to contain the size of the new string, 'newstrlen' must be equal 
 * to the size of 's1' plus the size of 's2'
 * LEN1: contains the size of 's1' which is calculated with ft_strlen.
 * LEN2: contains the size of 's2' which is calculated with ft_strlen.
 * IF: checks whether 'newstr' exists and returns null if it doesn't.
 * WHILE: a loop that works so long as 'i' is less than 'newstrlen'. If 'i' 
 * happens to be less than the size of 's1' then 's1' is copied inside 'newstr', 
 * else 'newstr' will be equal to the copied version of 's2' subtracting the 
 * size of 's1'. 
 * RETURN: the new string after adding the final null characters to it.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	newstrlen;
	size_t	len1;
	size_t	len2;
	size_t	i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstrlen = len1 + len2;
	newstr = (char *)malloc((newstrlen + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (i < newstrlen)
	{
		if (i < len1)
			newstr[i] = s1[i];
		else
			newstr[i] = s2[i - len1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
