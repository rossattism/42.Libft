/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:18 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/27 11:52:34 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief  Copia 'n' bytes del área de memoria apuntada por 'src' en el área
 * de memoria apuntada por 'dest', que pueden solaparse.
 * @param dest el puntero al área de memoria de destino
 * @param src el puntero al área de memoria de orígen
 * @param n el número de bytes a copiar
 * @return Un puntero al área de memoria de destino
 * @details
 * IF: comprueba si las versiones casteadas de 'dest' y 'src' (unsigned char
 * *d y unsigned char *s) existen y devuelve 0 si no es así.
 * IF: comprueba si 'd' es mayor que 's', de ser así entra en un bucle que
 * continua siempre y cuando 'n' recorriendo inversamente 'd' y 's' y 
 * copiando 's' en 'd' sea mayor que '0'.
 * WHILE: entra en un bucle que continúa recorriendo 's' y 'd' y copiando 
 * 's' en 'd' mientras 'i' sea menor que 'n'.
 * RETURN: devuelve un puntero al área de memoria de destino.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/**                                   FT_MAIN
 * @brief Comprueba la función por medio de dos cadenas 'd' y 's' que se pasan 
 * como argumentos, la utilización de una variable igualada al llamado de la 
 * función que contiene su retorno y el uso de 'printf' para imprimirla.
*/
int	main(void)
{
	char    d[10] = "memmove";
	char    s[10] = "is";
	char    *ret;
	ret = ft_memmove(d, s, 2);
	printf("%s", ret);
	return (0);
}
