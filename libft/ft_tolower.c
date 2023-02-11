/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:34:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:15:24 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_TOLOWER                             
* IF: condition that checks if 'c' was passed as an uppercase alphabetical 
character and then converts it from uppercase to lowercase. Otherwise, 
the function will return the original 'c' passed as an argument.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
