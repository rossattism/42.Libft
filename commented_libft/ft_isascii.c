/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:05:45 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:10:10 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h> // library containing write
/**
 * @brief Verifies if the character 'c' is ascii.
 *
 * @param c character passed as integer
 * @return 1 if ascii, 0 if not.
 */
int	ft_isascii(int c)
{
    /**
     * We start by creating the condition that allows the function
     * to return 1 if 'c' is ascii. Else, returns 0.
     */
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/**
* The main verifies that when passing the values to the function
* it returns what we expect. Since the character is passed as an
* integer, I do the conversion with +48 so that write can print it.
* Another way of coding the main is with printf.
*/
int	main(void)
{
	int ret = ft_isascii('a') + 48;
	write (1, &ret, 1);
	return(0);
}
