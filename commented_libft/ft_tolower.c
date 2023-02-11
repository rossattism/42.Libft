/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:34:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:21:09 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_TOLOWER:
 * @brief Converts an uppercase character 'c' (passed as integer) to lowercase.
 * If the argument is other than an uppercase alphabet, the same character that
 * is passed to the function is returned.
 * @param c The character to be converted (passed as integer).
 * @return The character 'c' converted to lowercase, otherwise just 'c'.
 * @details
 * IF: condition that checks if 'c' was passed as an uppercase alphabetic 
 * character and then converts it from uppercase to lowercase.
 * RETURN: 'c' converted to lowercase or the original value of 'c' if the 
 * condition is not met.
 * INFO: The expression "c += 32" is the same as saying that "c = c + 32" and 
 * moves the character 'c' 32 positions in the ASCII table that is the 
 * equivalent of the current 'c' uppercase to its lowercase.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/**                                 FT_MAIN:
 * @brief Main checks if the function works by converting it to a program. In
 * order to properly do this, printf is used to print 'c' using the function 
 * call and passing a value for 'c' to be used as an argument.
*/
int	main(void)
{
	printf("%c", ft_tolower('A'));
	return (0);
}
