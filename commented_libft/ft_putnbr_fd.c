/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:26:40 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/09 11:26:44 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**                            FT_PUTNBR_FD
 * @brief Sends the number 'n' to the file descriptor received by value.
 * @param n The number to send.
 * @param fd The file descriptor.
 * @details
 * IF: condition that handles the largest negative value of an integer. WRITE:
 * function that writes the number in the file descriptor. RETURN: nothing.
 * ELSEIF: condition met if the number received by value is less than 0 to
 * handle the negative signs.
 * IF: condition met if 'n' is greater or equal than 10 and which goal is
 * turning the integer values into characters to be printed by write.
 * ELSE: same goal than the other if but the condition is met when 'n' is 
 * less than 10.
 * WRITE: The main objective of the function is sending the string to the
 * file descriptor and this is done with the help of 'write'. 
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
