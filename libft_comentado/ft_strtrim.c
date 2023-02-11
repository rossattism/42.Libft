/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:17:25 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:17:30 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                FT_STRTRIM:
 * @brief	Reserva memoria y devuelveuna copia de 's1' con los caracteres que
 * se especifican en 'set' eliminados del principio y el final del string.
 * @param s1 Cadena de caracteres a recortar.
 * @param set Referencia de caracteres a eliminar.
 * @return La string recortada o NULO si la reserva de memoria falla.
 * @details
 * VARIABLES: 'i': el contador, 'len': el largo de 's1' y 'trim: un puntero a
 * la versión recortada de 's1'.
 * IF: condición que devuelve NULO si 'set' y 's1' no recibieron un valor por
 * parámetro.
 * LEN: variable que se iguala al largo de 's1' utilizando 'ft_strlen'.
 * WHILE: bucle que añade 1 a 'i' solo si 's1' existe y si existe un el 
 * caracter de la posición de 'i' en 's1' en 'set' (devuelto mediante un 
 * puntero a su primera aparición obtenido por 'ft_strchr').
 * WHILE: un bucle que resta 1 a 'len' solo si el valor de 'i' es menor que
 * 'len' y si el caracter de la posición de 'len-1' en 's1' existe en 'set'
 * (devuelto mediante un puntero a su primera aparición obtenido por 
 * 'ft_strchr').
 * TRIM: the trimmed version of 's1' will be a substring of 's1' made of 
 * 'len -1' size and starting from the value of 'i' with the help of 
 * 'ft_substr'.
 * RETURN: a pointer to the final trimmed version of 's1'.
 * RECORDATORIO: 'ft_strchr' busca la primera aparición de un caracter 'c' en 
 * el string 's' y devuelve un puntero, mientras que 'ft_substr' crea un 
 * substring de 's' empezando por 'start' y con una longitud máxima de 'len' y
 * devuelve la substring resultante.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]))
		len--;
	trim = ft_substr(s1, i, len - i);
	return (trim);
}

/**                            FT_MAIN
 * Con 'ft_putendfl_fd' en main se imprime por pantalla el retorno de
 * la función enviando su llamado como argumento..
*/
int	main(void)
{
	ft_putendl_fd(ft_strtrim("ft_strtrim", "tr"), 1);
	return (0);
}
