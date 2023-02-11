/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:06:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:04:21 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISALPHA:
 * @brief Verifies if the character 'c' (passed as integer) is alphabetical.
 * @param c the character to verify
 * @return 1 if 'c' is alphabetical, 0 if not.
 * @details
 * IF: condition that verifies if 'c' is an alphabetical character and returns
 * 1 if true, else 0.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/**                               FT_MAIN:
 * @brief Tests the result of the function with an integer variable 'ret' 
 * that is set equal to the call of the function. The return value is converted 
 * to character by adding 48 so that it can be printed using write.
*/
int	main(void)
{
	int ret = ft_isalpha('a') + 48;
	write (1, &ret, 1);
	return(0);
}