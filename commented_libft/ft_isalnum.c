/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:06:48 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:08:16 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISALNUM:
 * @brief Verifies if the character 'c' is alphabetical or numerical.
 * @param c The character to verify.
 * @return  1 if digit or alphabetical, 0 if not.
 * @details
 * IF: condition that verifies if 'c' is a numerical or alphabetical character
 * and returns 1 if true, else 0.
 */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/**                              FT_MAIN:
 * @brief Tests the result of the function with an integer variable 'ret' 
 * that is set equal to the call of the function. The return value is converted 
 * to character by adding 48 so that it can be printed using write.
 */
int	main(void)
{
	int ret = ft_isalnum('.') + 48;
	write (1, &ret, 1);
	return(0);
}
