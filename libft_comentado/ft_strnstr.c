/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:38:02 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:39:44 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <stdio.h> // librería que contiene printf
/**
 * @brief Localiza la primera aparición de la cadena 'little' terminada
 * en nulo en la cadena 'big', donde no se buscan más de 'len' caracteres.
 *
 * @details  Los caracteres que aparecen después de un carácter '\0'
 * no se buscan.
 *
 * @param big cadena donde buscar
 * @param little cadena a localizar
 * @param len longitud de bytes donde buscar
 * @return Si ‘little’ es un string vacío devuelve ‘big’, si ‘little’ no es
 * encontrado en ‘big’ devuelve nulo, sino se devuelve un puntero al primer
 * carácter de la primera aparición de ‘little’ en ‘big’.
 */
char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	/**
     * Comenzamos creando dos contadores 'i' y 'j' de tipo 'size_t' para 
	 * poder compararlos con "size_t len". Igualamos 'i' a 0. La primer 
	 * condición es que si 'little' está vacía, se devuelve 'big'. La 
	 * segunda condición es un bucle que recorre 'big' con la ayuda de 'i' 
	 * para poder encontrar a 'little' dentro. Para esto, establecemos que 
	 * se entre al bucle siempre que 'big' exista y que 'i' sea menor que 
	 * 'len', que son la cantidad de caracteres de 'big' donde se busca 
	 * 'little'. Igualamos nuestro segundo contador 'j' a 0 y creamos a 
	 * continuación otro bucle que establezca que mientras la posición de 
	 * [i + j] en 'big' sea igual a la posición de 'j' recorriendo 'little' 
	 * y que [i + j] sea menor que 'len', avanzamos 'j' en 'little' y 'big'. 
	 * De esta manera se irán comparando ambas cadenas a la vez hasta que 
	 * se llegue a un carácter nulo dentro de 'little', que es lo que 
	 * establece la última condición dentro del bucle. Devolvemos entonces, 
	 * el puntero a la posición de 'i' en 'big' que será igual al primer
     * carácter de la aparición de 'little' en 'big'. En el bucle se avanzará
     * primero 'i' sobre 'big' y luego 'j' sobre 'little' y 'big' a la vez.
    */
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/**
 * Para el main creamos el string 'big' para pasar como argumento y un
 * puntero 'ret' que será nuestro retorno. Igualamos 'ret' al llamado
 * de la función y le pasamos 'big', "little" y 'len'. Finalmente, hacemos
 * un printf de 'ret' para comprobar el resultado.
*/
int main()
{
    char big[15] = "strnstr";
 
    char *ret = ft_strnstr(big, "nst", 6);
    printf("%s\n", ret);
 
    return (0);
}
