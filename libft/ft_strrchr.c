/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:32:21 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:21:43 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Searches for the last occurrence of a character 'c' in a string 's'.
 *
 * @param s string
 * @param c character to be found in string
 * @return A pointer to last occurrence of 'c' in 's'
 * and NULL if 'c' is not found.
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
