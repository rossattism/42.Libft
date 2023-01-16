/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:34:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 17:48:01 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_LOWER                              
 * The function is made up of a single condition condition that checks if 'c' 
 * was passed as an uppercase alphabetic character and then converts it from 
 * uppercase to lowercase. Otherwise, the function will return the original 'c'
 * passed as an argument.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
