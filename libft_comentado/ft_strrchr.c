/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:31:46 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 17:33:04 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRRCHR:
 * @brief Busca la última aparición de un carácter 'c' en la cadena de 
 * caracteres terminada en nulo apuntada por 's'.
 * @param s Un puntero a la cadena terminada en nulo.
 * @param c El carácter a encontrar en el string.
 * @return Un puntero a la última aparición de 'c' en 's'* o un puntero nulo 
 * si 'c' no es encontrado en 's'.
 * @details
 * VARIABLES: 'find' que será la encargada de encontrar 'c' en el string y un 
 * contador 'i' que recorrerá 's'.
 * WHILE: un bucle que utiliza 'i' para recorrer la totalidad del string. 
 * WHILE: bucle que se repite mientras 'i' sea mayor o igual que 0. IF: 
 * condición de se cumple si la posición del contador en el string es igual a 
 * 'find', es decir, igual al carácter buscado. RETURN: se devuelve el 
 * puntero de 's' + 'i'. Dentro de este último bucle 'i' va a retroceder
 * comenzando de adelante hacia atrás, ya habiendo pasado por el primer bucle. 
 * RETURN: si 'c' no es encontrado, se devuelve nulo.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
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

/**                               FT_MAIN
 * @brief Para el main se crea un string que se utiliza como argumento para 
 * comprobar si la función es correcta. Se utiliza printf para imprimir el string
 * original y el carácter a encontrar. Se iguala un puntero constante 's1' al 
 * llamado de la función pasando como argumentos el string creado y el carácter 
 * a encontrar. Luego se imprime el nuevo string que apunta a 'c' y sino, se 
 * imprime 0.
*/
int	main(void)
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
