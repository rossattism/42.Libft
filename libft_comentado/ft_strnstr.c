/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:38:02 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:15:05 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                           FT_STRNSTR:
 * @brief Localiza la primera aparición de la cadena 'little' terminada
 * en nulo en la cadena 'big', donde no se buscan más de 'len' caracteres. Los 
 * caracteres que aparecen después de un carácter '\0'
 * no se buscan.
 * @param big cadena donde buscar
 * @param little cadena a localizar
 * @param len longitud de bytes donde buscar
 * @return Si ‘little’ es un string vacío devuelve ‘big’, si ‘little’ no es
 * encontrado en ‘big’ devuelve nulo, sino se devuelve un puntero al primer
 * carácter de la primera aparición de ‘little’ en ‘big’.
 * @details
 * VARIABLES: dos contadores 'i' y 'j' de tipo 'size_t' para poder ser 
 * comparados con "size_t len". 
 * SET: Se iguala 'i' a 0.
 * IF: condición que se cumple si 'little' está vacía y RETURN: se devuelve 
 * 'big'. 
 * WHILE: un bucle que recorre 'big' con la ayuda de 'i' para poder encontrar 
 * a 'little' dentro. Para esto, se establece que se entre al bucle siempre 
 * que 'big' exista y que 'i' sea menor que 'len', que son la cantidad de 
 * caracteres de 'big' donde se busca 'little'. Se iguala el segundo contador 
 * 'j' a 0 y se crea a continuación otro WHILE: bucle que establezca que 
 * mientras la posición de [i + j] en 'big' sea igual a la posición de 'j' 
 * recorriendo 'little' y que [i + j] sea menor que 'len', se avance 'j' en 
 * 'little' y 'big'. De esta manera se irán comparando ambas cadenas a la vez 
 * hasta que se llegue a un carácter nulo dentro de 'little', que es lo que 
 * establece IF: la última condición dentro del bucle. 
 * RETURN: Se devuelve, entonces, el puntero a la posición de 'i' en 'big' que 
 * será igual al primer carácter de la aparición de 'little' en 'big'. En el 
 * bucle se avanzará primero 'i' sobre 'big' y luego 'j' sobre 'little' y 'big' 
 * a la vez. ELSE: se devuelve 0 si las condiciones no se cumplen.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
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

/**                           FT_MAIN: 
 * @brief Para el main se crea el string 'big' que se pasa como argumento y 
 * un puntero 'ret' que será el retorno. Se iguala 'ret' al llamado de la 
 * función y se le pasa 'big', "little" y 'len' como argumentos. Finalmente, 
 * se realiza un printf de 'ret' para comprobar el resultado.
*/
int main()
{
    char big[15] = "strnstr";
 
    char *ret = ft_strnstr(big, "nst", 6);
    printf("%s\n", ret);
 
    return (0);
}
