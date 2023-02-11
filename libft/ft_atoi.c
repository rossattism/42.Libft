/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:51:31 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:19:17 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_ATOI
 * WHILE: loop condition that ensures that the counter ignores any type of 
 * space and continues iterating over the string.
 * IF: another condition that handles the negative signs
 * IF: a third condition that ensures that the counter continues iterating over 
 * the string after handling the negative sign.
 * WHILE: a last condition that converts the numbers to integer. 
 * RETURN: The result of the conversion to integer multiplied by the value of 
 * 'nsign' to guarantee that the negative numbers will have their signs.
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
