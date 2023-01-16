/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:44:28 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 17:41:56 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRLCAT
 * The function is made up of a condition that allows to concatenate 'src' to 
 * 'dest' if the length of 'dest' is less than 'size -1' and only when 'size' 
 * is greater than 0. If true, enters a loop that allows the counter 'i' to 
 * iterate over 'src' and 'j' to iterate over 'dest' always taking into account 
 * that 'destlen + i ' must be less than 'size -1'. Once outside the loop the 
 * NULL characters are added to 'dest'. The last condition simply equals 
 * 'destlen' to 'size' when 'destlen' is greater or equal than 'size'. The return
 * owill be 'destlen' + 'srclen', the length of the new combined string.
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	j = destlen;
	if (destlen < size - 1 && size > 0)
	{
		while (src[i] && destlen + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (destlen >= size)
		destlen = size;
	return (destlen + srclen);
}
