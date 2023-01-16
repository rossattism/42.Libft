/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:31:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 17:26:35 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRDUP
 * The function allocates memory for a new string that will be the copy of the
 * recieved by value and uses malloc to do so. This memory is calculated to be 
 * the length of 's' passed as an argument (this is obtained by using ft_strlen 
 * plus adding one more space for the null-terminator) multiplied by the size of 
 * char. The main condition in the function is checking whether if 's' exists, 
 * if true the counter iterates over both strings while 's' is copied into 'sc' 
 * and a null character is added at the end, if not the memory is freed. The 
 * function returns the copied version of 's'. The cast to char is used for
 * type safety and clarity purposes.
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
