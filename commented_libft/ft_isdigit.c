/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:07:15 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:06:05 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_ISDIGIT:
 * @brief Verifies if the character 'c' (passed as integer) is digit.
 * @param c The character to verify.
 * @return 1 if digit, 0 if not.
 * @details
 * IF: condition that verifies if 'c' is a numerical character and returns 1
 * if true, else 0.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**                                	FT_MAIN: 
 * @brief Tests the result of the function with an integer variable 'ret' that
 * is set equal to the call of the function. The return value is converted to
 * character by adding 48 so that it can be printed using write.
 */
int	main(void)
{
	int ret = ft_isdigit('1') + 48;
	write (1, &ret, 1);
	return(0);
}
