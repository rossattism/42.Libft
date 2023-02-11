/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:00:15 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:00:32 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_STRDUP:
 * @brief Duplicates a string 's' obtaining the memory for the new string with 
 * malloc.
 * @param s A pointer to the string to be copied.
 * @return A pointer to the new string.
 * @details
 * VARIABLE: 'sc': a pointer that will contain the copied string, 'size': the
 * length of the memory for the copy and 'i': the counter of type size_t to 
 * traverse the arrays.
 * SIZE: variable that contains the size of the original string that is needed
 * to allocate memory for the new copy. The function 'ft_strlen' is used to
 * obtain the size of 's', one more space is added at the end for NULL.
 * MALLOC: used to allocate memory for the new string that must be the size 
 * of whatever is passed as an argument for 's', which is obtained with 'size'.
 * IF: checks if 'sc' exists. WHILE: if true, a loop is used to iterate over 
 * both strings copying 's' in 'sc' and returning the final 'sc'.
 * ELSE: the memory is freed.
*/
char	*ft_strdup(const char *s)
{
	char	*sc;
	size_t	size;
	size_t	i;

	size = ft_strlen(s) + 1;
	i = 0;
	sc = (char *)malloc(sizeof(char) * size);
	if (sc)
	{
		while (s[i])
		{
			sc[i] = s[i];
			i++;
		}
		sc[i] = '\0';
	}
	else
		free (sc);
	return (sc);
}

/**									FT_MAIN
 * For main 'printf' is used to visualize the result of the copy created 
 * with the function.
*/
int	main(void)
{
	printf("%s\n", ft_strdup("strdup"));
	return (0);
}
