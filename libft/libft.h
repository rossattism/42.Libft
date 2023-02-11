/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:36 by srossatt          #+#    #+#             */
/*   Updated: 2023/02/11 14:04:24 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/**
 * @brief Structure for a list.
 * @param content The content of the node.
 * @param next The pointer to the next node.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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
 * @brief Allocates memory (with malloc) for a new string created from the
 * concatenation between 's1' and 's2'.
 * @param s1 The first string.
 * @param s2 The string to add to 's1'.
 * @return The new string or NULL if the memory allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief Removes all characters from the string ’set’ from the beginning and
 * end of ’s1’, until a non-set character is found. The resulting string is
 * returned with a malloc(3) reserved memory.
 * @param s1 The string to crop.
 * @param set The characters to eliminate from the string.
 * @return The cropped string or null if the memory allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief Allocates (using malloc(3)) an array of strings that results from
 * dividing the string 's' into substrings using the character 'c' as anchor.
 * The new array of strings must end in NULL.
 * @param s The string to break in cells.
 * @param c The anchor character.
 * @return The new array of strings or NULL if malloc fails.
 */
char	**ft_split(char const *s, char c);
/**
 * @brief Generate a string that represents the int value recieved as an
 * argument using malloc(3). Negative numbers must be handled.
 * @param n The integer to be converted.
 * @return The string representing the number or null if the memory fails.
 */
char	*ft_itoa(int n);
/**
 * @brief Applies the function 'f' to each character in a string 's' giving
 * the index of each character in 's' and the character itself as parameters. 
 * Generates a new string with the result of the successive use of the function.
 * @param s The string to iterate.
 * @param f The function to apply in each character.
 * @return The string created after using 'f' in each character correctly or 
 * NULL if the memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Applies the function 'f' to each character of the string 's', 
 * giving as parameters the index of each character within 's' and the address 
 * of the character itself, which can be modified if necessary.
 * @param s The string to iterate.
 * @param f The function to apply in each character.
 * @return None. 
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/**
 * @brief Sends 'c' to the file descriptor.
 * @param c The character to send.
 * @param fd The file descriptor.
 * @return None.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Sends the 's' pointer to the file descriptor.
 * @param s The string to send.
 * @param fd The file descriptor.
 * @return None.
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Writes the string 's' to the file descriptor 'fd' followed 
 * by a '\n' to make a new line.
 * @param s The string to write to the file descriptor.
 * @param fd The file descriptor.
 * @return None.
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Sends the number 'n' to the file descriptor received by value.
 * @param n The number to send.
 * @param fd The file descriptor.
 * @return None.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief Create a new node using malloc(3). The member variable ’content’ is 
 * initialized with the content of the parameter 'content'. The variable 
 * 'next', with NULL.
 * @param content The content to create the node with.
 * @return The new node.
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief Adds the node 'new' to the beginning of the list ’lst’.
 * @param lst The address of a pointer to the first node in a list.
 * @param new A pointer to the node to add to the beginning of the list.
 * @return Nothing
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Counts the number of nodes in a list.
 * @param lst The beginning of the list.
 * @return The length of the list.
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief Returns the last node of the list.
 * @param lst The beginning of the list.
 * @return The last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief Adds the node ’new’ to the end of 'lst'.
 * @param lst A pointer to the first node of a list.
 * @param new A pointer to add to the list.
 * @return None.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Takes a ’lst’ node as a parameter and frees the memory of the content 
 * using the ’del’ function given as a parameter, in addition to freeing the 
 * node. The memory of 'next' mustn't be freed.
 * @param lst The node to free.
 * @param del A pointer to the function used to free the memory of the node's
 * content.
 * @return Nothing
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));
/**
 * @brief Removes and frees the given 'lst' node and all consecutive nodes of 
 * that node, using the 'del' function and free(3). At the end, the pointer to 
 * the list must be NULL.
 * @param lst The address of a pointer to a node.
 * @param del A pointer to the function used to remove the contents of a node.
 * @return None.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));
/**
 * @brief Iterates the list 'lst' and applies the function 'f' in the content
 * of each node.
 * @param lst A pointer to the first node.
 * @param del A pointer to the function used in each node.
 * @return Nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void*));
/**
 * @brief Iterates over the ’lst’ list and applies the ’f’ function to the 
 * contents of each node. Creates a list resulting from the correct and 
 * successive application of the function 'f' on each node. The ’del’ function 
 * is used to remove the contents of a node, if necessary.
 * @param lst A pointer to the first node of the list.
 * @param f The address of a pointer to a function used to iterate through 
 * each item in the list.
 * @param del A pointer to the function used to remove the contents of a node, 
 * if necessary.
 * @return The new list or NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif