/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:42:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:19:27 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRLEN
 * WHILE: a loop that iterates over the string and then returns the value of 
 * the counter 'i' that will be equivalent to the length of 's'. 
 * SIZET: its use ensures that negative values cannot be returned and guarantees 
 * to be large enough to store the size of any object in bytes.
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
