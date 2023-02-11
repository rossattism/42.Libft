/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:35:54 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:14:57 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_TOUPPER                                 
 * IF: condition that checks if 'c' was passed as a lowercase alphabetic 
 * character and then converts it from lowercase to uppercase. 
 * RETURN: Otherwise, the function returns the original value of 'c'.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
