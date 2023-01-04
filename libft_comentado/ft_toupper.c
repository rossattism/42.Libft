/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:29:27 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:29:39 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // librería que contiene printf
/**
 * @brief Convierte el character minúscula 'c' (pasado como integer) a mayúscula.
 *
 * @details Si el argumento pasado a la función toupper() no es un alfabeto en
 * minúscula, devuelve el mismo carácter que fue pasado a la función.
 *
 * @param c carácter pasado como integer
 * @return El carácter 'c' convertido a mayúscula, sino 'c'.
 */
int	ft_toupper(int c)
{
	/**
     * Comenzamos creando la condición que comprueba si 'c' fue pasado
     * como un carácter alfabético en minúscula para luego convertirlo 
     * en mayúscula. Sino, la función devuelve el valor original de 'c'.
     * La expresión "c -= 32" es igual a decir que "c = c - 32" y mueve
     * el carácter 'c' 32 posiciones hacia atrás en la tabla ASCII,
     * que es el equivalente en mayúscula del valor actual de 'c'.
    */
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/**
 * Para el main simplemente usamos printf para imprimir el carácter 'c' pasado
 * como argumento y, para esto, lo igualamos al llamado de la función con el
 * carácter que pasamos como argumento para comprobar si todo funciona
 * correctamente.
*/
int main(void)
{
   printf("%c", ft_toupper('a'));
   return(0);
}
