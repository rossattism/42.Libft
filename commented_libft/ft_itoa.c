/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:22:14 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:22:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_ITOA
 * @brief Generates a string that represents the int value received as an 
 * argument using malloc(3). Negative numbers must be handled.
 * @param n The integer to be converted.
 * @return The string representing the number or null if the memory fails.
 * @details
 * VARIABLES: 's': the string representing the number, 'len': the length of the
 * number and 'nb': the integer to be converted.
 * NB: is set equal to the number passed by value.
 * LEN: is set equal to the call of the function 'ft_numlen' which calculates 
 * length of the number received by value.
 * NUMLEN: calculates the length of the number. IF: checks if the number is 
 * equal to 0 and returns '1' if true. IF: checks whether the number is 
 * negative and secures the sign. WHILE: counts the numbers. RETURN: the
 * final length.
 * MALLOC: allocates memory for the string using the length calculated with
 * 'ft_numlen'.
 * IF: returns NULL if the memory allocation fails.
 * IF: gives the value in character '0' to the position '0' of the string if 
 * the number received is 0.
 * IF: secures the sign if the number is negative.
 * WHILE: convers each integer number into a character.
 * RETURN: The string representing the number.
*/

static  size_t	ft_numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
	{
		len++;
		return (len);
	}
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_numlen (nb);
	s = (char *) malloc (sizeof (char) * (len + 1));
	if (!s)
		return (0);
		s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		s[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (s);
}

/**                       FT_MAIN
 * With this main, the function is converted to a program that checks 
 * and prints the possible problematic results for the function.
*/
int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(987654321));
	printf("%s\n", ft_itoa(-123456789));
}
