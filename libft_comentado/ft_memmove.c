/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:26:11 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t y malloc
#include "libft.h" // librería local que contiene ft_memcpy
/**
 * @brief  Copia "len" bytes de 'src' en 'dst', que pueden solaparse.
 *
 * @param dst string de destino
 * @param src string de orígen
 * @param len longitud de bytes
 * @return El valor original de 'dst'.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
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
 * Para el main creamos dos cadenas de caracteres que usaremos como
 * argumentos y un puntero char para contener el retorno de la función.
 * Igualamos 'ret' al llamado de la función con las cadenas pasadas como
 * argumento y el largo que le queremos pasar a 'len'. Usamos printf para
 * imprimir 'ret' y poder visualizar el retorno de la función.
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
