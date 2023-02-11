/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:22:37 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:22:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                                 FT_ITOA
 * @brief Crea una cadena de caracteres utilizando malloc(3) que representa el 
 * valor integer recibido como argumento. Se deben tener en cuenta los valores
 * negativos.
 * @param n El integer a convertir.
 * @return La cadena de caracteres representando el número o NULO si la memoria
 * falla.
 * @details
 * VARIABLES: 's': el string que representa a 'n', 'len': el largo de 'n' y 
 * 'nb': el valor de 'n'.
 * NB: se iguala a 'n'.
 * LEN: se iguala al llamado de la función 'ft_numlen' que calcula el largo del
 * número recibido como valor para 'n' contenido en 'nb'.
 * NUMLEN: calcula el largo del número. IF: comprueba si el número es igual a 0
 * y devuelve 1 de ser verdadero. IF: comprueba si el número es negativo y 
 * asegura el signo. WHILE: cuenta la cantidad de números. RETURN: el largo del
 * número.
 * MALLOC: reserva memoria para el string utilizando el largo calculado con la
 * función 'ft_numlen'.
 * IF: devuelve nulo si la reserva de memoria falla.
 * IF: le da el valor 0 a la posición 0 del string si el número recibido es 0.
 * IF: asegura el signo si el número es negativo.
 * WHILE: convierte cada integer en caracter.
 * RETURN: el string que representa al número.
*/

static  size_t	ft_numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
	{
		len++;
		return (len);
	}
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_numlen (nb);
	s = (char *) malloc (sizeof (char) * (len + 1));
	if (!s)
		return (0);
		s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		s[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (s);
}

/**                       FT_MAIN
 * Con este main, la función es convertida a un programa que comprueba 
 * e imprime los posibles resultados problemáticos para la función.
*/
int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(987654321));
	printf("%s\n", ft_itoa(-123456789));
}
