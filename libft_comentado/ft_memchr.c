/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:35:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 18:42:00 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                               FT_MEMCHR:
 * @brief Busca si el carácter 'c' (casteado a unsigned char) aparece en los 
 * primeros 'n' bytes de la cadena 's'.
 * @param s La cadena de caracteres (string).
 * @param c El carácter a encontrar.
 * @param n La longitud de bytes.
 * @return Un puntero void a la posición de la primera aparición de 'c' en el 
 * string, sino nulo.
 * @details
 * VARIABLES: 'sc': una copia el prototipo 's' que sea manipulable (no 
 * constante) y de tipo “unsigned char”. 'i': un contador del mismo tipo que 
 * 'n' (size_t) para que puedan ser comparados luego en el bucle. 
 * SET: se iguala la copia al prototipo original (casteado también a unsigned 
 * char) y se inicia el contador a 0.
 * WHILE: un bucle cuyo objetivo será que se recorra la copia del string 
 * mientras el contador sea menor que los 'n' bytes dados por argumento y así 
 * se logre o no encontrar el caracter 'c'. IF: Condición que se cumple si la 
 * posición del contador en el string es igual a 'c' (casteado a unsigned 
 * char), que significa que el caracter fue encontrado. RETURN: se devuelve 
 * un puntero a la dirección de memoria de la posición del contador en ese 
 * momento (casteado a void). 
 * RETURN: Si no se cumple esto, 'c' no fue encontrado y, por lo tanto, se 
 * devuelve nulo (0).
 * INFO: El casteo a "unsigned char" y "void" que se realiza en la función, 
 * se lleva a cabo porque su prototipo contiene un puntero constante [const 
 * void *s] y un contenedor de memoria de tipo size_t [size_t n]. El puntero, 
 * al ser constante, no puede ser modificado durante la función y por esto 
 * se crea una copia que sí es modificable. El contenedor de tipo size_t tiene 
 * la particularidad de aceptar solo valores positivos, por eso se crean tipos 
 * "unsigned" (sin signo) que serán estrictamente positivos. La conversión 
 * también es un requerimiento de la función.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)&sc[i]);
		i++;
	}
	return (0);
}

/**                               FT_MAIN:
 * Para el main se crea un string para pasar como argumento a la función y 
 * luego se utiliza printf para imprimmir el retorno y se llama a la función 
 * pasandole los argumentos que interesen para comprobar su funcionamiento.
 */
int	main(void)
{
	char s[] = "memchr";
	printf("%s\n", ft_memchr(s, 'c', 2));
	printf("%s\n", ft_memchr(s, 'c', 5));
	return (0);
}
