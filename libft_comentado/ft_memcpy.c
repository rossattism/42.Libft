/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:23:03 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:24:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <stdio.h> // librería que contiene printf
/**
 * @brief Copia 'n' bytes desde la posición de origen a la de destino.
 *
 * @param dst string de destino
 * @param src string de orígen
 * @param n longitud de bytes a modificar
 * @return Un puntero a 'dst'.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	/**
     * Comenzamos creando dos copias unsigned char llamadas 'd' y 's'
     * de las cadenas 'dst' y 'src' del prototipo . Luego creamos un
     * contador size_t que se usará luego en el bucle. Debe ser de tipo
     * size_t para poder ser comparado con 'n'. Ponemos el contador a 0
     * y por último casteamos las 'dst' y 'src' originales a unsigned char
     * para poder meterlas dentro de nuestras copias 'd' y 's'.
    */
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	/**
     * La primer condición restringe la función para que devuelva 0 en 
	 * los casos en que 'd' y 's' no existan y así prevenir que se rompa. 
	 * A continuación iniciamos un bucle con la condición de que mientras 
	 * nuestro contador 'i' sea menor que los 'n' bytes dados, continúe 
	 * copiándolos del área de memoria de 'src' al área de memoria de 'dst'. 
	 * Finalmente, devolvemos 'dst' que ahora se encuentra modificado.
    */
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/**
 * Para el main creamos las cadenas 'd' y 's' para usarlas como argumento 
 * de la función y creamos también un puntero llamado 'ret' que contendrá 
 * el retorno. Igualamos 'ret' al llamado de la función ft_memcpy pasándole 
 * los argumentos y finalmente usamos printf para imprimir la devolución 
 * que será 'dst' modificado por ft_memcpy.
*/
int	main(void)
{
	char d[30];
	char s[30] = "memcpy";
	char *ret;

	ret = ft_memcpy (d, s, 2);
	printf ("%s", ret);
	return (0);
}
