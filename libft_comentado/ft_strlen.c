/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:21:06 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:21:07 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h> // librería que contiene printf
#include	<stdlib.h> // librería que contiene size_t
/**
 * @brief Cuenta el número de caracteres dentro de un string 's'.
 *
 * @param s cadena de caracteres (string)
 * @return El tamaño de 's'.
 */
size_t	ft_strlen(const char *s)
{
	/**
     * Primero creamos e iniciamos un contador de tipo size_t para
     * que contenga solo valores positivos y sea compatible con la
     * cadena de caracteres constante del prototipo (const char 's').
	*/
	size_t  i;

	i = 0;
	/**
     * Luego comenzamos un bucle que recorre el string 's' y permite
     * devolver su tamaño, que será igual al valor del contador 'i' una
     * vez finalizado el bucle.
    */
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * Para el main creamos una cadena de caracteres y un integer que será igual
 * al llamado de la función con la cadena de caracteres pasada como argumento.
 * Luego usamos printf para imprimir el retorno de la función que será igual
 * al tamaño del string pasado como argumento.
*/
int main(void)
{
   char s[]= "strlen";
   int ret = ft_strlen(s);
   printf ("len: %d", ret);
   return (0);
}
