/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:42:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:11:29 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
/**
 * @brief Counts the characters in the string 's'.
 *
 * @param s string
 * @return The size of 's'.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
