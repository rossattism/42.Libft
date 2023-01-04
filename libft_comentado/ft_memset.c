/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:21:41 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 13:22:04 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // librería que contiene size_t
#include <string.h> // librería que contiene strcpy
#include <stdio.h> // librería que contiene puts
/**
 * @brief Copia caracteres 'c' (casteados a unsigned char)
 * en los primeros 'len' bytes de una string 'b'.
 *
 * @param b string
 * @param c caracteres pasados como integer
 * @param len largo de bytes a reemplazar
 * @return Un puntero al área de memoria 'b'.
 */
void    *ft_memset(void *b, int c, size_t len)
{
    /**
     * Comenzamos creando una copia de void *b casteado a
     * unsigned char y compatible con size_t (que solo acepta
     * valores positivos) para que pueda ser manipulado por la
     * función. Luego creamos un contador que debe ser size_t
     * al igual que 'len'.Continuamos iniciando el contador a 0
     * e igualando 'ma' a una versión casteada de 'b' a unsigned
     * char para que puedan ser compatibles.
     */
    unsigned char   *ma;
    size_t          i;

    i = 0;
    ma = (unsigned char *)b;
    /**
     * La función necesita trabajar en una pieza generalizada de
     * la memoria, no solo sobre cadenas de caracteres terminados
     * en NULL, por lo tanto no podemos tener un bucle basado en
     * la idea generalizada de que llegaremos a un final de un
     * string. La condición del bucle será que mientras el contador
     * 'i' sea menor que 'len' (siendo len - 1), 'i' recorrerá 'ma'
     * y además será igual que 'c' (casteado a unsigned char).
     * Finalmente, se devuelve un puntero a 'b' que ahora contendrá
     * los nuevos 'len' bytes cambiados por el valor de 'c'.
     */
    while (i < len)
    {
        ma[i++] = (unsigned char)c;
    }
    return (b);
}
/**
 * Para el main creamos un string 's' para pasar como argumento. Usamos
 * la función strcpy para copiar el string que creamos y que vamos a
 * modificar con ft_memset. Luego utilizamos puts para imprimir el string
 * copiado con strcpy sin haberle realizado cambios todavía. Continuamos
 * llamado a la función ft_memset con los argumentos que elijamos.
 * Finalmente, usamos la función puts nuevamente para imprimir el string
 * 's' una vez más pero con los cambios que sufrió con la función ft_memset.
 * Esto nos permite contrastar el string 's' sin modificar con el modificado.
 */
int main(void)
{
    char s[30];
    strcpy(s, "memset");
    puts(s);
    ft_memset(s, 'l', 3);
    puts(s);
    return (0);
}
