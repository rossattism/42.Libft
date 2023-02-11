/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:14:54 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:14:57 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_STRJOIN:
 * @brief Reserva memoria (con malloc) para una nueva string creada mediante la
 * concatenación de 's1' con 's2'.
 * @param s1 La string fuente.
 * @param s2 La string que añadir a 's1'.
 * @return La nueva string o nulo si la reserva de memoria falla.
 * @details
 * VARIABLES: 'newstr': un puntero a la nueva string, 'sizeofnewstr': el
 * contenedor del largo de la nueva string, 'sizeofs1' y 'sizeofs2': los 
 * contenedores de los largos de 's1' y 's2' e 'i': el contador.
 * SIZEOFNEWSTR: Para contener el largo del nuevo string, 'sizeofnewstr' debe
 * ser igual al tamaño de 's1' más el tamaño de 's2'. La función 'ft_strlen' 
 * se utiliza para este propósito. 
 * MALLOC: La variable 'newstr' se iguala al llamado de malloc que se utiliza
 * para reservar memoria para la nueva string que deberá ser del tamaño de 
 * chars (los bytes para las cadenas) multiplicado por el tamaño de 
 * 'sizeofnewstr' más 1 (el carácter nulo del final). 
 * IF: condición que comprueba si 'newstr' existe y devuelve nulo si no exite. 
 * WHILE: un bucle que comienza y continúa mientras 'i' sea menor que 
 * 'sizeofnewstr'. IF: dentro del bucle, si 'i' es menor que el tamaño de 's1', 
 * entonces 's1' es copaido dentro 'newstr', ELSE: 'newstr' se iguala a la 
 * versión copiada de 's2' restando el tamaño de 's1'. 
 * RETURN: la nueva cadena es devuelta luego de añadir los caracteres nulo 
 * finales.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	sizeofnewstr;
	size_t	sizeofs1;
	size_t	sizeofs2;
	size_t	i;

	i = 0;
	sizeofs1 = ft_strlen(s1);
	sizeofs2 = ft_strlen(s2);
	sizeofnewstr = sizeofs1 + sizeofs2;
	newstr = (char *)malloc((sizeofnewstr + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (i < sizeofnewstr)
	{
		if (i < sizeofs1)
			newstr[i] = s1[i];
		else
			newstr[i] = s2[i - sizeofs1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
