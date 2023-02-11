/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:45:13 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:16:38 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_STRTRIM
 * VARIABLES: 'i': the counter, 'len': the length of 's1' and 'trim: a pointer
 * to the trimmed version of 's1'.
 * IF: condition that returns null if 'set' and 's1' don't have any received
 * value.
 * LEN: this variable is set equal to the length of 's1' using 'ft_strlen' to 
 * do so.
 * WHILE: loop condition which adds 1 to 'i' only if 's1' exists and if there is
 * a pointer to the character in 's1[i]' current position existing in 'set' (
 * got by ft_strchr). 
 * WHILE: a loop condition that subtracts 1 to 'len' only if the value of 'i'
 * is less than 'len' and if a pointer to a character in 's1[len -1]' position 
 * exists in 'set' (got by ft_strchr).
 * TRIM: the trimmed version of 's1' will be a substring of 's1' made of 
 * 'len -1' size and starting from the value of 'i' with the help of 
 * 'ft_substr'.
 * RETURN: a pointer to the final trimmed version of 's1'.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]))
		len--;
	trim = ft_substr(s1, i, len - i);
	return (trim);
}
