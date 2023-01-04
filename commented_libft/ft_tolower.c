/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:34:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:06:14 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h> // library containing printf
/**
 * @brief Converts an uppercase character 'c' (passed as integer) to lowercase.
 *
 * @details If the arguments passed to the tolower() function is other than an 
 * uppercase alphabet, it returns the same character that is passed 
 * to the function.
 *
 * @param c character passed as integer
 * @return The character 'c' converted to lowercase, otherwise just 'c'.
 */
int	ft_tolower(int c)
{
	/**
     * We start by creating a condition that checks if 'c' was passed as an
     * uppercase alphabetic character and then converts it from uppercase 
     * to lowercase. Otherwise, the function will return the original 'c'
     * passed as argument. The expression "c += 32" is the same as saying
     * that "c = c + 32" and moves the character 'c' 32 positions in the
     * ASCII table that is the equivalent of the current 'c' uppercase
     * to its lowercase.
    */
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/**
 * For main we simply use printf to print our 'c' character passed as argument
 * and we set it equal to the call of the function with the character we want to
 * pass as argument to check if the function works.
*/
int main(void)
{
   printf("%c", ft_tolower('A'));
   return(0);
}
