/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:18:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:42:56 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_STRMAPI
 * VARIABLES: 'i' is the counter that iterates over the string, 'len' is the
 * size of the string necessary to allocate memory and 'str' is the string to
 * be returned.
 * IF: returns NULL when there's no value received for 's' or 'f'.
 * MALLOC: allocates the memory necessary to make a copy of the modified 
 * string we want to return. The size will be 'len' plus one 1 to compensate 
 * for the terminating '\0'. NULL is returned when the allocation fails.
 * WHILE: iterates over the string while applying 'f' to each character in
 * the string 's'.
 * RETURN: after adding the null-terminator, the new string is returned.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
