/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:07:40 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:19:34 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h> // librería que contiene write
/**
 * @brief Verifica si el carácter 'c' es alfabético o no.
 *
 * @param c carácter pasado como integer
 * @return 1 si es alfabético, 0 si no lo es.
 */
int	ft_isalpha(int c)
{
	/**
     * Comenzamos creando la condición que permite que la función
     * devuelva 1 si 'c' es un carácter alfabético. Otra forma de
     * escribirlo es con caracteres ASCII. Si esto no se cumple,
     * devuelve 0.
    */
	if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/**
* El main comprueba que al pasarle los valores a la función
* devuelva lo que esperamos. Como el carácter es pasado como
* integer, hago la conversión con +48 para que write pueda
* imprimirlo. Otra forma de escribir el main es con printf.
*/
int main(void)
{
   int ret = ft_isalpha('a') + 48;
   write (1, &ret, 1);
   return(0);
}
