/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:36 by srossatt          #+#    #+#             */
/*   Updated: 2022/12/09 13:39:13 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* NAME: isalpha
DESC: verifies if c is alphabetic
RETURN: 1 (T), 0 (F).
*/
int		ft_isalpha(int c);
/* NAME: isdigit
DESC: verifies if c is numeric
RETURN: 1 (T), 0 (F).
*/
int		ft_isdigit(int c);
/* NAME: isalnum
DESC: verifies if c is alphabetic or numeric
RETURN: 1 (T), 0 (F).
*/
int		ft_isalnum(int c);
/* NAME: isascii
DESC: verifies if c is ascii
RETURN: 1 (T), 0 (F).
*/
int		ft_isascii(int c);
/* NAME: isprint
DESC: verifies if c is printable
RETURN: 1 (T), 0 (F).
*/
int		ft_isprint(int c);
/* NAME: strlen
DESC: counts the characters in a string
RETURN: size of string
*/
size_t	ft_strlen(const char *s);
/* NAME: tolower
DESC: converts uppercases into lowercases
RETURN: lowercases
*/
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	*ft_memset(void *b, int c, size_t len);

#endif