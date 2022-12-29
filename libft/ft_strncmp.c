/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:54:53 by srossatt          #+#    #+#             */
/*   Updated: 2022/12/29 15:53:06 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/**
 * @brief compares 'n' bytes of s1 and s2
 * 
 * @param s1 string 1
 * @param s2 string 2
 * @param n bytes length
 * @return 0 (s1 = s2) -0 (s1 < s2) +0 (s1 > s2) 
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
