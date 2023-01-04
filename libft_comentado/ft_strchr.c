/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:30:43 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:31:20 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // librería que contiene printf
/**
 * @brief Busca la primera aparición de un carácter 'c' en un string 's'
 *
 * @param s cadena de caracteres (string)
 * @param c carácter a encontrar
 * @return  Un puntero a la primera aparición de 'c' en 's'
 * o nulo si 'c' no es encontrado en 's'.
 */
char	*ft_strchr(const char *s, int c)
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
     * Tendremos dos condiciones principales en la función: la primera es
     * un bucle que nos permite recorrer el string 's' mientras este no se
     * tope con su carácter nulo y que tendrá, a su vez, otra condición que
     * se cumpla si la posición de 'i' en 's' es igual a 'find' que es igual
     * al valor de 'c', la función devuelve entonces el puntero a 's' + la
     * posición 'i' actual que contendrá la primera aparición de 'c' en el
     * string; la segunda condición es que si la posición de 'i' en 's' es
     * igual a 'find' desde el inicio entonces que simplemente devuelva el
     * puntero a 's' + 'i' que será el equivalente a la primera aparición de
     * 'c' en el string. La condición sirve para el caso de que el string pasado
     * como argumento sea igual a nulo. Finalmente, si nada de esto se cumple,
     * devolvemos '0'.
    */
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
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
   char s[] = "strchr";
   const char* s1;
 
    printf("s: %s\nc: %c\n", s, 'h');
    s1 = ft_strchr(s, 'h');
    if (s1)
        printf("return: %s\n", s1);
    else
        printf("return: \n");
    return 0;
}
