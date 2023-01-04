/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:52:25 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:33:05 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <stdio.h> // librería que contiene printf
/**
 * @brief Compara 'n' bytes de la cadena 's1' con 's2'
 *
 * @param s1 cadena de caracteres 1
 * @param s2 cadena de caracteres 2
 * @param n longitud de bytes
 * @return 0 si (s1 = s2), negativos si (s1 < s2) y
 * positivos si (s1 > s2)
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	/**
     * Comenzamos creando un contador de tipo 'size_t' que pueda ser comparado
     * con 'size_t n' y lo igualamos a 0. Luego creamos un bucle que se inicie
     * con la existencia de 's1' y 's2' y siempre que 'i' sea menor que el
     * valor 'n' pasado como argumento. Dentro del bucle, tendremos la condición
     * de que las cadenas se comparen siempre y cuando sean distintas y se
     * devuelva entonces la diferencia entre 's1' y 's2', que a su vez casteamos
     * a 'unsigned char' para poder manipularlas. Si las condiciones no se cumplen,
     * entonces 's1' es igual a 's2' y, por lo tanto, se devuelve 0.
    */
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
/**
 * Para nuestro main creamos dos cadenas de caracteres 's1' y 's2' que enviamos a
 * la función como argumentos y una variable tipo 'int' llamada 'ret' para que
 * contenga el valor de retorno de la función. Igualamos 'ret' al llamado de
 * la función pasando los strings y un valor para 'n'. Usamos printf para imprimir
 * el valor de 'ret' que será el valor que la función nos devuelva para comprobar
 * si es correcto.
*/
int main(void)
{
   char s1[]= "strncmp";
   char s2[]= "ok";
   int ret = ft_strncmp(s1, s2, 3);
   printf ("%d", ret);
   return (0);
}
