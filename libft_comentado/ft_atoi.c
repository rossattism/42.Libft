/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:31:08 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/01 19:37:29 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_ATOI:
 * @brief Convierte el inicio de un string apuntado por 'nptr' en int.
 * @param nptr un puntero al string
 * @return El valor convertido o 0 en caso de error.
 * @details
 * VARIABLES: 'ret': para obtener el resultado. 'nsign': para manejar los 
 * signos negativos. 'i': que es el contador. 
 * WHILE: bucle que se encarga de avanzar sin modificar nada en caso de que se 
 * encuentre con espacios al principio del string. 
 * IF: Condicion que se encargará de manejar el símbolo negativo, si se 
 * encuentra con un '-', lo multiplicará por -1 para que se mantenga.
 * IF: condición que, luego de la anterior, simplemente avanzará sin modificar 
 * nada cual sea el signo que encuentre. 
 * WHILE: bucle que se encargará de convertir los números de 'ascii' (char) a 
 * 'int'. Un ejemplo sería el siguiente:
 * result = result * 10 + nptr[i] - '0';
 * result = 0 * 10 + '1' - '0';
 * result = 0 * 10 + '1' - '0' || (int)49 - (int)48 = (int)1;
 * result = 0 * 10 + 1;
 * result = 1;
 * RETURN: Se devuelve el resultado multiplicado por la variable 'nsign' de 
 * manera que se mantenga el símbolo.
 */
int	ft_atoi(const char *nptr)
{
	long			ret;
	long			nsign;
	unsigned int	i;

	ret = 0;
	nsign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		nsign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = ret * 10 + nptr[i] - '0';
		i++;
	}
	return (ret * nsign);
}

/**                          FT_MAIN:
 * @brief Para el main se crean variables con todas las posibles cadenas
 * con los diferentes resultados que la función podría dar y se comparan
 * con la atoi original. Se utiliza printf para visualizar los retornos.
*/
int	main(void)
{
    char *s1 = "---123";  
    char *s2 = "a123";
    char *s3 = "  123aa";
    char *s4 = "-123 123";
   
    int n0 = ft_atoi(s1);
    int n1 = atoi(s1);
    int n2 = ft_atoi(s2);
    int n3 = atoi(s2);
    int n4 = ft_atoi(s3);
    int n5 = atoi(s3);
    int n6 = ft_atoi(s4);
    int n7 = atoi(s4);
 
    printf("ft_atoi: %d | atoi: %d\n", n0, n1);
    printf("ft_atoi: %d | atoi: %d\n", n2, n3);
    printf("ft_atoi: %d | atoi: %d\n", n4, n5);
    printf("ft_atoi: %d | atoi: %d\n", n6, n7);
    return 0;
}
