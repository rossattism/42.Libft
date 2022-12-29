/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:42:44 by srossatt          #+#    #+#             */
/*   Updated: 2022/12/29 15:52:06 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/**
 * @brief counts the characters in a string
 * 
 * @param s string
 * @return size of string
*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
