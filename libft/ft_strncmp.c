/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:54:53 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:59:28 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
/**                                 FT_STRNCMP
 * VARIABLES: 'i': the counter to traverse the strings.
 * WHILE: a loop that starts with the existence of 's1' and 's2' and as long as 
 * 'i' is less than the 'n' passed as an argument. IF: Inside, there is another 
 * condition that compares the position of 'i' in 's1' with the position of 'i' 
 * in 's2', but only as long as they are different. RETURN: If all conditions 
 * are met, the difference between 's1' and 's2' casted to 'unsigned char' is 
 * returned. 
 * RETURN: If the conditions are not met, then 's1' is equal to 's2' and 
 * therefore 0 is returned.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
