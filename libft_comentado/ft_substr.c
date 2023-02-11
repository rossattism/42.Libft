/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:13:04 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 14:21:23 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_SUBSTR:
 * @brief Reserva memoria (con malloc) para una substring de la string 's' 
 * que empieza desde el índice 'start' y tiene una longitud máxima de 'len'.
 * @param s La cadena de donde crear la substring.
 * @param start El índice de 's' donde comienza la substring.
 * @param len El largo máximo de la substring.
 * @return Un puntero a la nueva substring.
 * @details
 * VARIABLE: 'subs': el puntero a la nueva substring.
 * IFONE: comprueba que 's' exista y devuelve nulo para asegurar la función.
 * IFTWO: comprueba si el tamaño de 's' es menor que el valor de 'start' y
 * devuelve una string vacía creada por 'ft_strdup'.
 * IFTHREE: comprueba si el tamaño de 's' menos 'start' es menor que el
 * valor  de 'len' e iguala 'len' al tamaño de 's' menos 'start'.
 * MALLOC: se reserva memoria con malloc que tendrá que ser de caracteres 
 * porque se crea un string y se multiplica por el tamaño de 'len' que es el 
 * máximo tamaño que puede tener la substring y se agrega 1 que corresponde 
 * al carácter nulo final. 
 * IF: comprueba si la reserva de memoria fue realizada con éxito.
 * MEMCPY: se utiliza la función 'ft_memcpy' para crear la nueva substring.
 * RETURN: una vez copiado todo el substring, se agrega el carácter nulo al 
 * final y se devuelve el puntero a la nueva substring.                             
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/**                               FT_MAIN
 * Para el main se crea un puntero que se iguala al llamado de la función y 
 * que sea equivalente al substring creado. A la función se le pasa como 
 * argumento un valor para 's', otro para 'start' y otro para 'len' y luego 
 * se utiliza 'printf' para imprimir el resultado.
*/
int	main(void)
{
	char	*subs;

	subs = ft_substr("ft_substr", 4, 6);
	printf("%s\n", subs);
	return (0);
}
