/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:05:45 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:11:25 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISASCII:
 * @brief Verifies if the character 'c' (passed as integer) is ascii.
 * @param c The character to verify.
 * @return 1 if ascii, 0 if not.
 * @details
 * IF: condition that verifies if 'c' is an ascii character and returns 1 if
 * true, else 0
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/**                               FT_MAIN:
 * @brief Tests the result of the function with an integer variable 'ret' that
 * is set equal to the call of the function. The return value is converted to
 * character by adding 48 so that it can be printed using write.
*/
int	main(void)
{
	int ret = ft_isascii('a') + 48;
	write (1, &ret, 1);
	return(0);
}
