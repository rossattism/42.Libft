/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:19:09 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/04 14:27:05 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief  convierte en nulos los primeros 'n' caracteres de una cadena 
 * de caracteres 's'.
 *
 * @param s string a ser modificada
 * @param n longitud de bytes a modificar
 * @return Ninguno.
 */
void	ft_bzero(void *s, size_t n)
{
	/**
     * Comenzamos creando una copia 'ma' de void *s casteado a
     * unsigned char y compatible con size_t (que solo acepta
     * valores positivos) para que pueda ser manipulado por la
     * función. Luego creamos un contador que debe ser size_t
     * al igual que 'n'. Continuamos iniciando el contador a 0
     * e igualando 'ma' a 's'.
     */
	unsigned char	*ma;
	size_t			i;

	i = 0;
	ma = s;
	/**
     * Al igual que en ft_memset, la condición del bucle será que
     * mientras el contador 'i' sea menor que 'n' (siendo n - 1),
     * 'i' recorrerá 'ma' y además será igual que 0. Esta función
     * no devuelve nada.
     */
	while (i < n)
	{
		ma[i++] = 0;
	}
}
