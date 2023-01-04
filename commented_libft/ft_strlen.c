/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:42:44 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:51:50 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h> // library containing printf
#include <stdlib.h> // library containing size_t
/**
 * @brief Counts the characters in the string 's'
 *
 * @param s string
 * @return The size of 's'.
*/
size_t	ft_strlen(const char *s)
{
    /**
     * First we create and initialize a size_t counter that can contain
     * only positive values to make it compatible with the constant
     * char string of the prototype.
    */
	size_t	i;

	i = 0;
    /**
     * Then we start a loop that iterates over the characters of 's'
     * to finally return size of the string that is equal the value of
     * the counter after finishing the loop.
    */
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * For main we create a string and an integer that equals the call of
 * the function with the string passed as a argument. We then use printf
 * to print the return of the function that will be equal to the size of
 * the string that was passed as a argument.
*/
int main(void)
{
   char s[]= "strlen";
   int ret = ft_strlen(s);
   printf ("len: %d", ret);
   return (0);
}
