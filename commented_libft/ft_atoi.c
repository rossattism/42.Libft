/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:20:35 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:29:58 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_ATOI:
 * @brief Converts the initial portion of the string pointed to by 'nptr'
 * to int.
 * @param nptr A pointer to the string to be modified.
 * @return The converted value or 0 on errors.
 * @details
 * VARIABLES: 'ret': to obtain the result. 'nsign': to handle the negative signs 
 * 'i': the counter. 
 * WHILE: A first loop that takes care of moving forward without modifying 
 * anything in case it encounters spaces at the beginning of the string.
 * IF: Condition that will handle the negative sign. If it finds a '-', it 
 * will multiply it by -1 to keep the symbol. 
 * IF: Condition that it will simply advance without changing anything. 
 * WHILE: a loop that will take care of converting the numbers from 'ascii' 
 * (char) to 'int'. An example would be the following:
 * result = result * 10 + nptr[i] - '0';
 * result = 0 * 10 + '1' - '0';
 * result = 0 * 10 + '1' - '0' || (int)49 - (int)48 = (int)1;
 * result = 0 * 10 + 1;
 * result = 1;
 * RETURN: the result multiplied by the 'nsign' variable to ensure maintaining 
 * the sign.
 */
int	ft_atoi(const char *nptr)
{
	long			ret;
	long			nsign;
	unsigned int	i;

	ret = 0;
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
		ret = ret * 10 + nptr[i] - '0';
		i++;
	}
	return (ret * nsign);
}

/**                      FT_MAIN:
 * @brief For main all the possible results that the function must handle
 * are created and tested both with the original function and the copy created. 
 * Printf is used to visualize the results.
*/
int	main(void)
{
    char *s1 = "---123";  
    char *s2 = "a123";
    char *s3 = "  123aa";
    char *s4 = "-123 123";

    int n0 = ft_atoi(s1);
    int n1 = atoi(s1);
    int n2 = ft_atoi(s2);
    int n3 = atoi(s2);
    int n4 = ft_atoi(s3);
    int n5 = atoi(s3);
    int n6 = ft_atoi(s4);
    int n7 = atoi(s4);

    printf("ft_atoi: %d | atoi: %d\n", n0, n1);
    printf("ft_atoi: %d | atoi: %d\n", n2, n3);
    printf("ft_atoi: %d | atoi: %d\n", n4, n5);
    printf("ft_atoi: %d | atoi: %d\n", n6, n7);
    return 0;
}
