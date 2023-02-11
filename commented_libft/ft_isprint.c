/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:22:45 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 10:17:03 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_ISPRINT:
 * @brief Verifies if the character 'c' (passed as integer) is printable.
 * @param c The character to verify.
 * @return 1 if printable, 0 if not.
 * @details 
 * IF: condition that verifies if 'c' is a printable character and returns 1
 * if true, else 0.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/**                               FT_MAIN:
 * @brief Tests the result of the function with an integer variable 'ret' 
 * that is set equal to the call of the function. The return value is 
 * converted to character by adding 48 so that it can be printed using write.
*/
int	main(void)
{
	int ret = ft_isprint('\n') + 48;
	write (1, &ret, 1);
	return(0);
}
