/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:35:54 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:17:31 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                           FT_TOUPPER
 * @brief Converts a lowercase character 'c' (passed as integer) to uppercase.
 * If the argument is other than a lowercase alphabet, it returns the same
 * character that is passed to the function.
 * @param c The character to be converted passed as integer.
 * @return The character 'c' converted to uppercase, otherwise just 'c'.
 * @details
 * IF: checks if 'c' was passed as a lowercase alphabetic character and then 
 * converts it from lowercase to uppercase.
 * RETURN: 'c' converted to uppercase or the original value of 'c' if the 
 * condition is not met.
 * INFO: The expression "c -= 32" is the same as saying that "c = c - 32" and 
 * moves the character 'c' back 32 positions in the ASCII table, which is the 
 * uppercase equivalent of the current value of 'c'.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/**                              FT_MAIN
 * @brief Main checks if the function works by converting it to a program. In
 * order to properly do this, printf is used to print 'c' using the function 
 * call and passing a value for 'c' to be used as an argument.
*/
int	main(void)
{
	printf("%c", ft_toupper('a'));
	return (0);
}
