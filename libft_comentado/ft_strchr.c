/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:30:43 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:24:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRCHR:
 * @brief Busca la primera aparición de un carácter 'c' en un string apuntado 
 * por 's'.
 * @param s Un puntero a la cadena de caracteres (string). 
 * @param c El carácter a encontrar.
 * @return  Un puntero a la primera aparición de 'c' en la cadena apuntada por 
 * 's' o un puntero o nulo si 'c' no es encontrado.
 * @details
 * VARIABLES: 'find' que será la encargada de encontrar 'c' en el string y un 
 * contador 'i' que recorra 's'.
 * CAST: 'find' es igualado al carácter 'c' casteado a 'unsigned char' y el 
 * contador 'i' se inicializa a 0.
 * WHILE: un bucle que nos permite recorrer el string 's' mientras este no se
 * tope con su carácter nulo. IF: condición dentro del mencionado bucle que se 
 * cumple si la posición de 'i' en 's' es igual a 'find' que es igual al valor 
 * de 'c'. RETURN: el puntero a 's' + la posición 'i' actual que contendrá la 
 * primera aparición de 'c' en el string (es decir, 'i' le señala al puntero la 
 * posición de 'c').
 * IF: condición sirve para el caso de que el string pasado como argumento sea 
 * igual a nulo y se cumple si la posición de 'i' en 's' es igual a 'find' 
 * desde el inicio. RETURN: devuelve el puntero a 's' + 'i'.
 * RETURN: si ninguna de las condiciones se cumplen, se devuelve '0'.
*/
char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
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

/**                              FT_MAIN:
 * @brief Para el main se crea un string que se usa como argumento para 
 * comprobar si la función es correcta. Printf es utilizado para imprimir 
 * el string original y el carácter a encontrar. Se iguala un puntero 
 * constante 's1' al llamado de la función pasando como argumentos el string 
 * que fue creado y el carácter a encontrar. Luego se imprime el nuevo 
 * string que apunta a 'c' y sino, se imprime 0.
*/
int	main(void)
{
	char s[] = "strchr";
	const char  *s1;

	printf("s: %s\nc: %c\n", s, 'h');
	s1 = ft_strchr(s, 'h');
	if (s1)
		printf("return: %s\n", s1);
	else
		printf("return: \n");
	return (0);
}
