/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:57:38 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 09:58:41 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRITERI
 * COUNTER: 'i' is an unsigned int variable to compensate for the possibilty 
 * of a long string.
 * WHILE: loop condition that iterates over the string while applying the 
 * function f to each character. The function finishes when the loop reaches
 * the end of the string.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
