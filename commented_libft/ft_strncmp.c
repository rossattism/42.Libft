/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:54:53 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:11:43 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
#include <stdio.h> // library containing printf
/**
 * @brief Compares 'n' bytes of 's1' and 's2'
 *
 * @param s1 string 1
 * @param s2 string 2
 * @param n bytes length
 * @return Number 0 if (s1 = s2), negative numbers if (s1 < s2)
 * and positive numbers if (s1 > s2)
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	/**
     * We start by creating a 'size_t' type counter that can be compared
     * to 'size_t n' and we set it equal to 0. Then we create a loop that
     * starts with the existence of 's1' and 's2' and as long as 'i' is
     * less than the value 'n' passed as a argument. Inside the loop, we
     * have the condition of comparing the strings only as long as they
     * are different. If all conditions are met, the difference between
     * 's1' and 's2' casted to 'unsigned char' is returned. If the conditions
     * are not met, then 's1' is equal to 's2' and therefore 0 is returned.
    */
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/**
 * For our main we create two strings 's1' and 's2' that we send to the function
 * as arguments and an 'int' variable called 'ret' to hold the value of the 
 * return of the function. We match 'ret' to the function call by passing the 
 * strings and a value for 'n'. To check if the function works, We use printf to 
 * print 'ret' that will contain the return of the function.
*/
int	main(void)
{
	char	s1[]= "strncmp";
	char	s2[]= "ok";
	int	ret = ft_strncmp(s1, s2, 3);
	printf ("%d", ret);
	return (0);
}
