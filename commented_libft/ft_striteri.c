/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:24:32 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:24:36 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRITERI:
 * @brief Applies the function 'f' to each character of the string 's', 
 * giving as parameters the index of each character within 's' and the address 
 * of the character itself, which can be modified if necessary.
 * @param s The string to iterate.
 * @param f The function to apply in each character.
 * @return None.
 * @details
 * COUNTER: 'i' is an unsigned int variable to compensate for the possibilty of 
 * a long string.
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
