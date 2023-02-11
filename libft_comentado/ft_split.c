/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:21:19 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:21:20 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                              FT_SPLIT:
 * @brief Reserva memoria (usando malloc(3)) para un array de strings que
 * resulta de dividir el string 's' en substrings utilizando el caracter 'c'
 * como divisor. El nuevo array de strings debe terminar en NULO.
 * @param s El string a dividir.
 * @param c El caracter divisior.
 * @return El nuevo array de strings o nulo si la reserva de memoria falla.
 * @details
 * VARIABLE: 'tab': un puntero que contendrá la tabla (array de strings)
 * creada con la función.
 * MALLOC: crea memoria necesaria para alojar 'tab' que será de un tamaño de
 * caracteres multiplicado por la cantidad de palabras que tendrá la tabla 
 * (calculadas por 'ft_wordcounter') + 1 que es el espacio final para NULO.
 * IF: necesario para asegurar la función, nulo es devuelto si ni 'tab' ni 's'
 * existen.
 * RETURN: el nuevo array de strings 'tab' creado con la función. Para poder
 * obtener el resultado, se debe crear una reserva de memoria para cada 
 * palabra (fila) en la tabla.
 * WORDCOUNTER: cuenta la cantidad de palabras en 'tab' delimitadas por el 
 * valor de 'c', necesario para saber la cantidad de memoria que se debe
 * reservar para 'tab'.
 * WORDSIZE: calcula el largo de las palabras dentro de 'tab', necesario para
 * saber la cantidad de memoria que se debe reservar para cada palabra dentro
 * de 'tab'.
 * MEMORYFREE: libera la memoria alojada para una palabra que no existe.
 * MEMORYMAKER: reserva memoria para cada palabra (fila) dentro de 'tab'.
 * RECORDATORIO: 'ft_substr' crea una substring de 's' empezando por el valor
 * de 'start' con un largo máximo de 'len'.
*/

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (w);
}

static size_t	ft_wordsize(char const *s, char c)
{
	size_t	len;

    len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_memoryfree(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_memorymaker(char **str, char *s, char c)
{
	size_t	len;
	size_t	n;

	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_wordsize(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_memoryfree(str);
				return (NULL);
			}
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}

char	**ft_split(char const *s,  char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	return (ft_memorymaker(tab, (char *)s, c));
}

/**                               FT_MAIN
 * Imprime 'tab' (array de palabras) creado por la función 'ft_split' 
 * igualando 'tab' al llamado de la función con los parámetros seleccionados 
 * para comprobarla.
*/
int main (void)
{
    char    **tab;
    int i;


    tab = ft_split("the ft_split function !", 32);
    i = 0;
    while (i < 5)
    {
        printf("tab[%d] = %s\n", i, tab[i]);
        i++;
    }
    return(0);
}
