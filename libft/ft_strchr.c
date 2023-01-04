/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:33:07 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:20:36 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Searches for the first occurrence of a character 'c' in a string 's'.
 *
 * @param s string
 * @param c character to find
 * @return A pointer to first occurrence of 'c' in 's'
 * and NULL if 'c' doesn't exist in 's'.
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
