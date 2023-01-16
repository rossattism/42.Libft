/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/01/16 17:30:30 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Verifies if the character 'c' (passed as integer) is alphabetical.
 * @param c The character to verify.
 * @return 1 if 'c' is alphabetical, 0 if not.
 */
int		ft_isalpha(int c);
/**
 * @brief Verifies if the character 'c' (passed as integer) is digit.
 * @param c The character to verify.
 * @return 1 if digit, 0 if not.
 */
int		ft_isdigit(int c);
/**
 * @brief Verifies if the character 'c' is alphabetical or numerical.
 * @param c The character to verify.
 * @return  1 if digit or alphabetical, 0 if not.
 */
int		ft_isalnum(int c);
/**
 * @brief Verifies if the character 'c' (passed as integer) is ascii.
 * @param c The character to verify.
 * @return 1 if ascii, 0 if not.
 */
int		ft_isascii(int c);
/**
 * @brief Verifies if the character 'c' (passed as integer) is printable.
 * @param c The character to verify.
 * @return 1 if printable, 0 if not.
 */
int		ft_isprint(int c);
/**
 * @brief Calculates the length of the null-terminated string pointed to by 's'.
 * @param s A pointer to the null-terminated string.
 * @return The length of the string.
 */
size_t	ft_strlen(const char *s);
/**
 * @brief Fills the first 'n' bytes of the memory area pointed to by 'b' with
 * the constant byte ‘c’.
 * @param b A pointer to the memory area.
 * @param c The value to be set.
 * @param n The number of bytes to be set.
 * @return A pointer to the memory area.
 */
void	*ft_memset(void *b, int c, size_t n);
/**
 * @brief Sets the first ‘n’ bytes of the memory area pointed to by ‘s’ to zero.
 * @param s A pointer to the memory area.
 * @param n The number of bytes to set to zero.
 * @return Does not return a value.
 */
void	ft_bzero(void *b, size_t n);
/**
 * @brief Copies 'n' bytes from the memory area pointed to by 'src' to the
 * memory area pointed to by 'dest'.
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief Copies 'n' bytes from 'src' to 'dest' with the guarantee that the copy 
 * will work correctly even if the two memory areas overlap.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to 'dest' memory area.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/**
 * @brief Copies 'size' characters of the null-terminated string pointed to by 
 * 'src' to the buffer pointed to by 'dest', ensuring that the destination 
 * buffer is always null-terminated and that the string is not truncated.
 * @param dest A pointer to the destination buffer.
 * @param src A pointer to the source string.
 * @param size The size of the destination buffer.
 * @return It is always the length of 'src', without including the null
 * terminator.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
/**
 * @brief It concatenates the null-terminated string pointed to by 'src' 
 * to the end of the null-terminated buffer pointed to by 'dest', ensuring 
 * that the destination buffer is always null-terminated and that the string 
 * is not truncated.
 * @param dest A pointer to the destination buffer.
 * @param src A pointer to the source string.
 * @param size The size of the destination buffer.
 * @return The combined length of 'src' and 'dest', not including the null 
 * terminator.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size);
/**
 * @brief Converts an uppercase character 'c' (passed as integer) to lowercase.
 * If the argument is other than an uppercase alphabet, the same character that 
 * is passed to the function is returned.
 * @param c The character to be converted (passed as integer).
 * @return The character 'c' converted to lowercase, otherwise just 'c'.
 */
int		ft_tolower(int c);
/**
 * @brief Converts a lowercase character 'c' (passed as integer) to uppercase.
 * If the argument is other than a lowercase alphabet, it returns the same 
 * character that is passed to the function.
 * @param c The character to be converted passed as integer.
 * @return The character 'c' converted to uppercase, otherwise just 'c'.
 */
int		ft_toupper(int c);
/**
 * @brief Searches for the first occurrence of the character 'c' in the 
 * null-terminated string pointed to by 's'.
 * @param s A pointer to the null-terminated string.
 * @param c The character to search for.
 * @return A pointer to first occurrence of 'c' in 's' or a NULL pointer if 
 * 'c' is not found.
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief Searches for the last occurrence of a character 'c' in the
 * null-terminated string pointed to by 's'.
 * @param s A pointer to the null-terminated string.
 * @param c The character to search for.
 * @return A pointer to last occurrence of 'c' in the string pointed to by 's' 
 * and a NULL pointer if 'c' is not found.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Compares the first 'n' characters of the null-terminated strings 
 * pointed to by 's1' and 's2'.
 * @param s1 A pointer to the first null-terminated string.
 * @param s2 A pointer to the second null-terminated string.
 * @param n The maximum number of characters to compare.
 * @return 0 if (s1 = s2), less than 0 if (s1 < s2) and more than 0 if (s1 > s2).
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief Searches for the first occurrence of the character 'c' in the first 
 * 'n' bytes of the memory area pointed to by 's'.
 * @param s A pointer to the memory area.
 * @param c The character to search for.
 * @param n The number of bytes to search.
 * @return A pointer to the first occurrence of 'c' in the memory area pointed 
 * to by 's' or a null pointer if 'c' is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief Compares the first 'n' bytes of the memory areas pointed to by 's1' 
 * and 's2'. 
 * @param s1 A pointer to the first memory area.
 * @param s2 A pointer to the second memory area.
 * @param n  The number of bytes to compare.
 * @return Zero if the two strings are identical, otherwise it returns the 
 * difference between the first two differing bytes (treated as unsigned char).
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief Searches for the first occurrence of the string 'little' in the
 * string 'big', where 'little' is a string with a length of at most 'len' 
 * characters. Characters that appear after a `\0' character are not searched.
 * @param big A pointer to the source string 'big'.
 * @param little A pointer to the string to search for.
 * @param len The maximum number of characters to search in 'big'.
 * @return If 'little' is an empty string, 'big' is returned; if 'little'
 * occurs nowhere in 'big', NULL is returned; otherwise a pointer to the
 * first character of the first occurrence of 'little' is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**
 * @brief Converts the initial portion of the string pointed to by 'nptr'
 * to int.
 * @param nptr A pointer to the string to be modified.
 * @return The converted value or 0 on errors.
 */
int		ft_atoi(const char *nptr);
/**
 * @brief Dynamically allocates memory for an array of 'nmemb' elements of 
 * 'size' bytes each.
 * @param nmemb The number of elements in the array.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or a null pointer if the request 
 * fails.
*/
void	*ft_calloc(size_t nmemb, size_t size);
/**
 * @brief Duplicates a string 's' obtaining the memory for the new string 
 * with malloc.
 * @param s A pointer to the string to be copied.
 * @return A pointer to the new string.
*/
char	*ft_strdup(const char *s);
/**
 * @brief Allocates memory (with malloc) for a substring* of 's' that starts 
 * from index 'start' and has a maximum length of 'len'.
 * @param s The string where to create the substring.
 * @param start The index of 's' where to start the substring.
 * @param len The maximum length of the substring.
 * @return A pointer to the new substring.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief sends the 'c' character to the file descriptor
 * 
 * @param c character
 * @param fd file descriptor
 * @return none
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief sends the 's' pointer to the file descriptor
 * 
 * @param s string
 * @param fd file descriptor
 * @return none
 */
void	ft_putstr_fd(char *s, int fd);

#endif