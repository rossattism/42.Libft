/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:23:53 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:23:55 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                             FT_STRMAPI
 * @brief  A cada carácter de la string ’s’, aplica la función ’f’ dando como 
 * parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. 
 * Genera una nueva string con el resultado del uso sucesivo de ’f’.
 * @param s La string que iterar.
 * @param f La función a aplicar sobre cada carácter.
 * @return La string creada tras el correcto uso de ’f’ sobre cada carácter o 
 * NULO si falla la reserva de memoria.
 * @details
 * VARIABLES: contador 'i' que itera sobre la string; 'len' que contiene el 
 * tamaño del string necesario para reservar la memoria y 'str' que es la 
 * nueva cadena a ser devuelta.
 * IF: devuelve nulo cuando no hay valores pasados para 's' y/o 'f'.
 * MALLOC: reserva la memoria necesaria para crear una copia de la string
 * modificada que queremos devolver. El tamaño de esta memoria estará 
 * condicionado por el valor de 'len' más 1 que compensa por el nulo final.
 * Si la reserva falla se devuelve nulo.
 * WHILE: bucle que itera la cadena mientras aplica 'f' a cada uno de los
 * caracteres de 's'.
 * RETURN: Se devuelve la nueva string luego de agregarle el carácter nulo al
 * final.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;


	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**                               FT_TEST
 * @brief Comprueba la función usando un ejemplo de función 'f' para ser 
 * aplicada a la cadena y dos variables char que son las cadenas a utilizar,
 * una para enviar como argumento y otra para devolver.
 */
char	f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int	main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_striteri(str1, *f);
	printf("%s\n", str2);
}