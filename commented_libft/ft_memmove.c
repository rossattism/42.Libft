/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:45:38 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 12:58:19 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // library containing size_t and malloc
/**
 * @brief Copies 'len' bytes from 'src' to 'dst' that may overlap;
 * the copy is always done in a non destructive manner.
 *
 * @param dst destination string
 * @param src source string
 * @param len bytes length
 * @return The original value of 'dst'.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	/**
	 * We start by creating
	 * 
	 */
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (!dst && !src)
		return (0);
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/**
 * For main we create two character strings that we will use as arguments and
 * a char pointer to contain the return of the function. We set 'ret' equal to
 * the function call with the strings passed as arguments and the length that
 * we want to pass to 'len'. We use printf to print 'ret' and be able to
 * visualize the return of the function.
 */
int main(void)
{
    char    s1[30] = "memmove";
    char    s2[30] = "is";
    char    *ret;
 
    ret = ft_memmove(s1, s2, 2);
    printf("%s", ret);
    return (0);
}
