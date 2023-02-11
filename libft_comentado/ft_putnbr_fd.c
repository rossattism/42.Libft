/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:46:26 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:46:29 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTNBR_FD:
 * @brief Envía el número ’n’ al file descriptor dado.
 * @param n El número que enviar.
 * @param fd El file descriptor sobre el que escribir.
 * @return Nada.
 * @details
 * IF: condición que se encarga de manejar el número negativo más grande de un
 * integer. WRITE: función que escribe el número en el file descriptor. RETURN: 
 * nada.
 * ELSEIF: condición que se cumple si el número recibido es menor que 0 para 
 * encargarse de los signos negativos.
 * IF: ondición que se cumple si 'n' es mayor o igual que 10 y cuyo objetivo
 * es convertir los valores 'int' en 'char' para poder ser impresos por write.
 * ELSE: mismo objetivo que el if anterior, pero la condición se cumple cuando
 * 'n' es menor que 10.
 * WRITE: La meta de la función es enviar el string al file descriptor, esto
 * sucede gracias a la ayuda de la función 'write'. 
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	str;

	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, "8", 1);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		str = '0' + n % 10;
	}
	else
		str = '0' + n;
	write(fd, &str, 1);
}
