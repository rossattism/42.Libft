/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:12:21 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:57:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t
/**
 * @brief Searches for the first occurrence of a character 'c' (converted
 * to an unsigned char) in the first 'n' bytes given of a string 's'.
 *
 * @param s string
 * @param c character to be found in string
 * @param n length of bytes
 * @return A pointer to the first occurrence of 'c' in 's'
 * or NULL if 'c' is not found.
 */
void	*ft_memchr (const void *s, int c, size_t n)
{
	/**
     * We start by replacing the 's' prototype with a copy that is manipulable
     * (not constant) and of type “unsigned char”. We proceed by declaring a
     * counter of the same type as 'n' (size_t) so that they can be compared
     * later in the loop. Finally we match the copy to the original prototype
     * (also casted to unsigned char) and set the counter to 0.
    */
	unsigned char*	sc;
	size_t			i;

	sc = (unsigned char*)s;
	i = 0;
	/**
     * We continue creating a loop whose objective will be to traverse the copy
     * of the string as long as the counter is less than the 'n' bytes given by
     * the argument and thus be able to find or not the character 'c'. If the
     * condition that the position of the counter in the string equals to 'c'
     * (casted to unsigned char) is met, it means the character was found and
     * a pointer to the index of the position of the counter (casted to void) is
     * returned. If this is not true, then 'c' was not found and therefore
     * null (0) is returned. The conversion to “unsigned char” and “void" that 
	 * is performed on the function is done because its prototype contains a 
	 * constant pointer [const void *s] and a memory container of type size_t 
	 * [size_t n]. The pointer, being constant, cannot be modified during the 
	 * function thus a copy that can be modified is created. The size_t type 
	 * container has the particularity of accepting positive values only, that 
	 * is why strictly positive "unsigned" types are created. The conversion 
	 * is also a requirement that appears in the description of the function.
	 */
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)&sc[i]);
		i++;
	}
	return (0);
}
/**
 * For main we create a string to pass as an argument to the function and 
 * then we use printf to print the return and call the function passing 
 * the arguments that interest us to check its operation.
 */
int	main(void)
{
	char s[] = "memchr";
	printf("%s\n", ft_memchr(s, 'c', 2));
	printf("%s\n", ft_memchr(s, 'c', 5));
	return (0);
}
