/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:31:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 12:29:34 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRDUP
 * VARIABLES: 'sc': a pointer to the copied string, 'size': the length of the 
 * memory for the copy and 'i': the counter of type size_t.
 * SIZE: variable that contains the size of the original string that is needed
 * to allocate memory for the new copy. The function 'ft_strlen' is used to
 * obtain the size of 's', and one more space is added at the end for NULL.
 * MALLOC: used to allocate memory for the new string that must be the size of 
 * whatever is passed as an argument for 's', which is obtained with 'size'.
 * IF: condition that checks whether if 's' exists. WHILE: if true, a loop
 * helps the counter iterating over both strings while 's' is copied into 'sc'. 
 * AFTER: a null character is added at the end.
 * ELSE: the memory is freed. 
 * RETURN: the copied version of 's'. 
 * INFO: Casting to char is used for type safety and clarity purposes.
*/

char	*ft_strdup(const char *s)
{
	char	*sc;
	size_t	size;
	size_t	i;

	size = ft_strlen(s) + 1;
	i = 0;
	sc = (char *)malloc(sizeof(char) * size);
	if (sc)
	{
		while (s[i])
		{
			sc[i] = s[i];
			i++;
		}
		sc[i] = '\0';
	}
	else
		free (sc);
	return (sc);
}
