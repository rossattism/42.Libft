/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:35:57 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:58:02 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // librería que contiene printf
#include <stdlib.h> // librería que contiene size_t
/**
 * @brief Busca si el carácter 'c' (casteado a unsigned char) aparece en 
 * los primeros 'n' bytes de la cadena 's'.
 *
 * @param s cadena de caracteres (string)
 * @param c carácter a encontrar
 * @param n longitud de bytes
 * @return Un puntero void a la posición de la primera aparición de 'c' en el string, sino nulo
 */

void	*ft_memchr (const void *s, int c, size_t n)
{
	/**
     * Comenzamos sustituyendo el prototipo 's' por una copia que sea
     * manipulable (no constante) y de tipo “unsigned char”. Proseguimos
     * declarando un contador del mismo tipo que 'n' (size_t) para que
     * puedan ser comparados luego en el bucle. Finalmente igualamos la
     * copia al prototipo original (casteado también a unsigned char)
     * e iniciamos el contador a 0.
    */
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)s;
	i = 0;
	/**
	* Continuamos creando un bucle cuyo objetivo será que se recorra la copia
	* del string mientras el contador sea menor que los 'n' bytes dados por
	* argumento y así se logre o no encontrar el caracter 'c'. Si se cumple la
	* condición de que la posición del contador en el string sea igual a 'c'
	* (casteado a unsigned char), significa que el caracter fue encontrado y
	* se devuelve entonces un puntero a la dirección de memoria de la posición
	* del contador en ese momento (casteado a void). Si no se cumple esto, 'c'
	* no fue encontrado y, por lo tanto, se devuelve nulo (0).
	* El casteo a "unsigned char" y "void" que se realiza en la función, se lleva 
	* a cabo porque su prototipo contiene un puntero constante [const void *s] y 
	* un contenedor de memoria de tipo size_t [size_t n]. El puntero, al ser 
	* constante, no puede ser modificado durante la función y por esto se crea una 
	* copia que sí es modificable. El contenedor de tipo size_t tiene la 
	* particularidad de aceptar solo valores positivos, por eso se crean tipos 
	* "unsigned" (sin signo) que serán estrictamente positivos. La conversión 
	también es un requerimiento de la función.
	*/
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)&sc[i]);
		i++;
	}
	return (0);
}
/**
 * Para el main creamos un string para pasar como argumento a la función
 * y luego utilizamos printf para imprimmir el retorno y llamamos a la 
 * función pasandole los argumentos que nos interesen para comprobar
 * su funcionamiento.
 */
int	main(void)
{
	char s[] = "memchr";
	printf("%s\n", ft_memchr(s, 'c', 2));
	printf("%s\n", ft_memchr(s, 'c', 5));
	return (0);
}
