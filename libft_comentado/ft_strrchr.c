/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:31:46 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:32:24 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <stdio.h> // librería que contiene printf
/**
 * @brief Busca la última aparición de un carácter 'c' en el string 's'
 *
 * @param s cadena de caracteres (string)
 * @param c carácter a encontrar en el string
 * @return Un puntero a la última aparición de 'c' en 's'
 * o nulo si 'c' no es encontrado en 's'.
 */
char	*ft_strrchr(const char *s, int c)
{
	/**
     * Comenzamos creando una variable 'find' que será la encargada
     * de encontrar 'c' en el string y un contador 'i' que recorra 's'.
     * Igualamos entonces 'find' al carácter 'c' casteado a
     * 'unsigned char' y el contador 'i' a 0.
    */
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	/**
     * Continuamos creando la primer condición que será un bucle que
     * utilice 'i' para recorrer la totalidad del string. Luego creamos
     * otro bucle que se repita mientras 'i' sea mayor o igual que 0 y
     * que dentro tiene la condición de que si la posición del contador
     * en el string es igual a 'find', es decir, igual al carácter buscado,
     * entonces devolver el puntero de 's' + 'i'. Dentro de este último bucle
     * 'i' va a retroceder, comenzando de adelante hacia atrás ya habiendo
     * pasado por el primer bucle. Finalmente, si 'c' no es encontrado, se
     * devuelve nulo.
    */
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/**
 * Para el main creamos un string que usaremos como argumento para comprobar
 * si la función es correcta. Utilizamos printf para imprimir nuestro string
 * original y el carácter a encontrar. Igualamos un puntero constante 's1'
 * al llamado de la función pasando como argumentos el string que creamos y
 * el carácter a encontrar. Luego imprimimos el nuevo string que apunta a 'c'
 * y sino, imprimimos 0.
*/
int main(void)
{
   char s[] = "strrchr";
   const char* s1;
 
   printf("s: %s\nc: %c\n", s, 'r');
   s1 = ft_strrchr(s, 'r');
   if (s1)
       printf("return: %s\n", s1);
   else
       printf("return: \n");
   return 0;
}
