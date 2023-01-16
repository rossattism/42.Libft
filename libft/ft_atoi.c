/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:51:31 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 16:10:16 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_ATOI
 * The function is made up of four conditions: one that ensures that the counter
 * ignores any type of space and continues iterating over the string, another
 * that handles the negative signs, a third one that ensures that the counter 
 * continues iterating over the string after handling the negative sign and a
 * last one that converts the numbers to integer. The return is the result
 * of the conversion to integer multiplied by the value of 'nsign' to guarantee
 * that the negative numbers will have their signs.
 */

int	ft_atoi(const char *nptr)
{
	long			result;
	long			nsign;
	unsigned int	i;

	result = 0;
	nsign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		nsign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * nsign);
}
