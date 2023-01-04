/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:35:54 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:04:46 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h> // library containing printf
/**
 * @brief Converts a lowercase character 'c' (passed as integer) to uppercase.
 *
 * @details If the arguments passed to the toupper() function is other than a
 * lowercase alphabet, it returns the same character that is passed 
 * to the function.
 *
 * @param c character passed as integer
 * @return The character 'c' converted to uppercase, otherwise just 'c'.
 */
int	ft_toupper(int c)
{
	/**
	 * We start by creating the condition that checks if 'c' was passed as 
	 * a lowercase alphabetic character and then converts it from lowercase
	 * to uppercase. Otherwise, the function returns the original value 
	 * of 'c'. The expression "c -= 32" is the same as saying that 
	 * "c = c - 32" and moves the character 'c' back 32 positions in the ASCII 
	 * table, which is the uppercase equivalent of the current value of 'c'.
    */
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/**
 * For main we simply use printf to print our 'c' character passed as argument
 * and we set it equal to the call of the function with the character we want to
 * pass as argument to check if the function works.
*/
int	main(void)
{
	printf("%c", ft_toupper('a'));
	return(0);
}
