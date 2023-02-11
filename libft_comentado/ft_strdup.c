/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:01:04 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:01:20 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_STRDUP:
 * @brief Duplica la cadena de caracteres 's' obteniendo la memoria para la 
 * nueva cadena utilizando malloc.
 * @param s El puntero a la cadena a copiar.
 * @return Un puntero a la nueva cadena.
 * @details
 * VARIABLES: 'sc': el puntero contenedor de la copia de la cadena, 'size': el
 * contenedor del tamaño de 's', 'i': un contador 'de tipo size_t.
 * SIZE: variable contenedora del tamaño de 's' que lo obtiene por medio de la
 * función 'ft_strlen' y añadiendo un espacio para el nulo final.
 * MALLOC: Se utiliza malloc para reservar memoria para la nueva cadena que 
 * debe tener el tamaño de cualquiera sea el valor de 's' pasado como argumento.
 * IF: Condición que comprueba si existe 'sc'. WHILE: bucle para recorrer 'sc' 
 * y 's' con ayuda del contador mientras se copia 's' dentro de 'sc'. AFTER: se
 * agrega el nulo del final.
 * ELSE: se libera la memoria si 'sc' no existe.
 * RETURN: el puntero a la copia. 
    */
char	*ft_strdup(const char *s)
{
	char	*sc;
	size_t	size;
	size_t	i;

	size = ft_strlen(s) + 1;
	i = 0;
	sc = (char *)malloc(sizeof(char) * size);
	if (sc)
	{
		while (s[i])
		{
			sc[i] = s[i];
			i++;
		}
		sc[i] = '\0';
	}
	else
		free (sc);
	return (sc);
}
/**                              FT_MAIN
 * Se utiliza 'printf' en main para visualizar el resultado de la copia 
 * creada con la función.
*/
int	main(void)
{
	printf("%s\n", ft_strdup("strdup"));
	return(0);
}
