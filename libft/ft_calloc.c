/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:16:00 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 17:31:20 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**								FT_CALLOC
 * The function is made up of a single condition that checks whether the memory
 * allocated with malloc is empty and returns 0 if true. The aim of this
 * function is to allocate memory for any type of object. This allocation is 
 * made with malloc and will be the equivalent of the multiplication between 
 * 'size' and 'nmemb'. The 'ft_bzero' call is used to empty the allocated 
 * memory to finally return a pointer to it.
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
