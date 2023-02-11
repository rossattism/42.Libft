/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:42:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:19:55 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_STRLEN:
 * @brief Calculates the length of the null-terminated string pointed to by 's'
 * @param s A pointer to the null-terminated string.
 * @return The length of the string.
 * @details
 * SIZET: type of variable that can contain only non-negative values and that 
 * is compatible with the constant character string of the prototype.
 * WHILE: a loop that iterates over 's' allowing to return its size, since 
 * this will be equal to the value of 'i' once it has finished.
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

/**                               FT_MAIN:
 * @brief Converts the function to program and tests it by declaring a string 
 * 's' and an integer 'ret' that will be set equal to the call of the 
 * function with that same string passed as an argument. It uses 'printf' to 
 * print the value of 'ret' that will be equal to the return of the function 
 * (the size of 's').
*/
int main(void)
{
	char s[]= "strlen";
	int ret = ft_strlen(s);
	printf ("len: %d", ret);
	return (0);
}