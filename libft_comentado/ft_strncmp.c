/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:52:25 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:12:21 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRNCMP:
 * @brief Compara 'n' bytes de la cadena 's1' con 's2'.
 * @param s1 La cadena de caracteres 1.
 * @param s2 La cadena de caracteres 2.
 * @param n La longitud de bytes.
 * @return 0 si (s1 = s2), negativos si (s1 < s2) y positivos si (s1 > s2).
 * @details
 * VARIABLES: 'i': un contador de tipo 'size_t' que pueda ser comparado con 
 * 'size_t n' igualado a 0.
 * WHILE: un bucle que se inicia con la existencia de 's1' y 's2' y siempre que 
 * 'i' sea menor que el valor 'n' pasado como argumento. IF: que las cadenas se 
 * comparen siempre y cuando sean distintas. RETURN: se devuelve la diferencia 
 * entre 's1' y 's2', que a su vez se castea a 'unsigned char' para poder 
 * manipularlas. 
 * RETURN: Si las condiciones anteriores no se cumplen, entonces 's1' es igual 
 * a 's2' y, por lo tanto, se devuelve 0.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
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

/**                             FT_MAIN:
 * @brief Se crean dos cadenas de caracteres 's1' y 's2' que se envian a la 
 * función como argumentos y una variable tipo 'int' llamada 'ret' para que
 * contenga el valor de retorno de la función. Se iguala 'ret' al llamado de
 * la función pasando los strings y un valor para 'n'. Se utiliza printf para 
 * imprimir el valor de 'ret' que será el valor que la función devuelva.
*/
int	main(void)
{
	char s1[]= "strncmp";
	char s2[]= "ok";
	int ret = ft_strncmp(s1, s2, 3);
	printf ("%d", ret);
	return (0);
}
