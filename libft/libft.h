/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:36 by srossatt          #+#    #+#             */
/*   Updated: 2022/12/29 13:34:46 by srossatt         ###   ########.fr       */
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
/* NAME: memset
DESC: sets the first 'len' bytes of 'b' to the value c.
RETURN: a pointer to 'b'
*/
void	*ft_memset(void *b, int c, size_t len);
/* NAME: bzero
DESC: turns first 'len' bytes of 'b' to NULL
RETURN: nothing
*/
void	ft_bzero(void *b, size_t n);
/* NAME: memcpy
DESC: copies 'n' bytes from src to dst
RETURN: a pointer to destiny
*/
void	*ft_memcpy(void *dst, const void *src, size_t n);
/* NAME: memmove
DESC: copies "len" bytes from src memory into dst memory
RETURN: a pointer to dst
*/
void	*ft_memmove(void *dst, const void *src, size_t len);
/* NAME: strlcpy
DESC: copies a string but limits the destination buffer length
RETURN: the length of src
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/* NAME: ft_strlcat
DESC: appends string src to the end of dst and it depends on dstsize
RETURN: the combined length of src and dst
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/* NAME: tolower
DESC: converts uppercases into lowercases
RETURN: lowercases
*/
int		ft_tolower(int c);
/* NAME: toupper
DESC: converts lowercases into uppercases
RETURN: uppercases
*/
int		ft_toupper(int c);
/* NAME: strchr
DESC: finds the first occurrence of a c in s
RETURN: a pointer to first occurrence of c in s and NULL if c doesn't exist in s.
*/
char	*ft_strchr(const char *s, int c);
/* NAME: strrchr
DESC: finds the last occurrence of a c in s
RETURN: a pointer to last occurrence of c in s and NULL if c doesn't exist in s.
*/
char	*ft_strrchr(const char *s, int c);
/* NAME: strncmp
DESC: compares 'n' bytes of s1 and s2
RETURN: 0 (s1 = s2), -0 (s1 < s2), +0 (s1 > s2)
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* NAME: ft_putchar_fd
DESC: sends the c character to the file descriptor
RETURN: nothing
*/
void	ft_putchar_fd(char c, int fd);
/* NAME: ft_putstr_fd
DESC: sends the 's' pointer to the file descriptor
RETURN: nothing
*/
void	ft_putstr_fd(char *s, int fd);

#endif