/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:14:24 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:14:28 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_STRJOIN:
 * @brief Allocates memory (with malloc) for a new string created from the
 * concatenation between 's1' and 's2'.
 * @param s1 The first string.
 * @param s2 The string to add to 's1'.
 * @return The new string or NULL if the memory allocation fails.
 * @details
 * VARIABLES: 'newstr': a pointer to the new combined string, 'sizeofnewstr': a
 * container of the length of the new string, 'sizeofs1' and 'sizeofs2': the
 * containers of the lengths of 's1' and 's2', and 'i': the counter.
 * SIZEOFNEWSTR: To contain the size of the new string, 'sizeofnewstr' must be 
 * equal to the size of 's1' plus the size of 's2', and the function ft_strlen 
 * is used for such purposes. 
 * MALLOC: The variable 'newstr' is set equal to the call of malloc that is 
 * used to allocate memory for the new string and that will have a size of 
 * chars (the bytes for a string), multiplied by the 'sizeofnewstr' plus 1 
 * (the final null character). 
 * IF: condition that checks whether 'newstr' exists and returns null if it 
 * doesn't. 
 * WHILE: a loop that begins and continues so long as 'i' is less than 
 * 'sizeofnewstr'. IF: inside the loop, if 'i' happens to be less than the 
 * size of 's1' then 's1' is copied inside 'newstr', ELSE: 'newstr' will be 
 * equal to the copied version of 's2' subtracting the size of 's1'. 
 * RETURN: the new string is returned after adding the final null characters.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	sizeofnewstr;
	size_t	sizeofs1;
	size_t	sizeofs2;
	size_t	i;

	i = 0;
	sizeofs1 = ft_strlen(s1);
	sizeofs2 = ft_strlen(s2);
	sizeofnewstr = sizeofs1 + sizeofs2;
	newstr = (char *)malloc((sizeofnewstr + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (i < sizeofnewstr)
	{
		if (i < sizeofs1)
			newstr[i] = s1[i];
		else
			newstr[i] = s2[i - sizeofs1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
