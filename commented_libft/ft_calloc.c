/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:09:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:16:17 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
/**                               FT_CALLOC
 * @brief Dynamically allocates memory for an array of 'nmemb' elements of
 * 'size' bytes each.
 * @param nmemb The number of elements in the array.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or a null pointer if the request
 * fails.
 * @details
 * VARIABLE: 'memory': a pointer to the memory area to allocate.
 * MALLOC: malloc is used to allocate the memory, this allocation will be the 
 * equivalent of the multiplication between 'size' and 'nmemb'. For example, if 
 * I want to allocate memory for two integers, the count would be 4 * 2 = 8 
 * because each integer will be 4 bytes in size. 
 * IF: condition that returns a pointer to null if the memory is an empty 
 * argument.
 * BZERO: the 'ft_bzero' function is called to empty the memory allocated with
 * malloc. 
 * RETURN: the memory already reserved and correctly emptied.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(size * nmemb);
	if (memory == 0)
		return (0);
	ft_bzero(memory, (size * nmemb));
	return (memory);
}

/**							     FT_MAIN
 * In all cases, main will return empty values, since the function empties 
 * memory, that is, it sets memory to 0 and returns null on error.
*/
int	main(void)
{
	char	*ma;

	ma = ft_calloc(2, 4);
	printf("return: %s\n", ma)
}
