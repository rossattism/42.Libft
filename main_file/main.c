/////////////////////////////////////////////////
/// libraries								  ///
/////////////////////////////////////////////////

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/////////////////////////////////////////////////
/// mandatory								  ///
/////////////////////////////////////////////////

/* int	ft_isalpha(int c);
int	main(void)
{
	int ret = ft_isalpha('a') + 48;
	write (1, &ret, 1);
	return(0);
}
*/

/* int	ft_isdigit(int c);
int	main(void)
{
	int ret = ft_isdigit('1') + 48;
	write (1, &ret, 1);
	return(0);
}
*/

/* int	ft_isalnum(int c);
int	main(void)
{
	int ret = ft_isalnum('.') + 48;
	write (1, &ret, 1);
	// printf("%d", ft_isalnum('-'));
	return(0);
}
*/

/* int	ft_isascii(int c);
int	main(void)
{
	int ret = ft_isascii('a') + 48;
	write (1, &ret, 1);
	return(0);
}
*/

/* int	ft_isprint(int c);
int	main(void)
{
	int ret = ft_isprint('\n') + 48;
	write (1, &ret, 1);
	return(0);
}
*/

/* size_t	ft_strlen(const char *s);
int	main(void)
{
	char s[]= "hola";
	int ret = ft_strlen(s); //int ret es igual a la cantidad de caracteres que tiene el string que es ft_strlen(s).
	printf ("La longitud del string es %d", ret);
	return (0);
}
*/

/* void	*ft_memset(void *b, int c, size_t len);
int main(void)
{
    char s[30];
    strcpy(s, "memset power");
    puts(s);
    ft_memset(s, 'l', 5);
    puts(s);
    return (0);
}
*/

/* void	*ft_memmove(void *dst, const void *src, size_t len);
int	main(void)
{
	char 	s1[30] = "memmove power";
	char	s2[30] = "ok";
	char	*ret;

	ret = ft_memmove(s1, s2, 2);
	printf("%s", ret);
	return (0);
}
*/

/* size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int main()
{
  char src[] = "strlcpy";
  char dst[] = "ok strl";
  int ret;

  ret = ft_strlcpy(dst, src, 4);
  printf("%s\n", src);
  printf("%d", ret);
}
*/

/* size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int main()
{
	char src[] = "strlcpy";
	char dst[] = "isthestrlcpy";
	char src1[] = "strlcpy";
	char dst1[] = "isthestrlcpy";
	int ret;
	int ret1;

	ret = ft_strlcat(dst, src, 4);
	ret1 = strlcat(dst1, src1, 4);
	printf("src: ");
	puts(src);
	printf("dst: ");
	puts(dst);
	strncpy(dst, src, 4);
	printf("src + dst: ");
	puts(dst);
	printf("ft_strlcat len: %d\n", ret);
	printf("strlcat len: %d", ret1);
}
*/

/* int	ft_toupper(int c)
int	main(void)
{
	printf("%c", ft_toupper('a'));
	return (0);
}
*/

/* int	ft_tolower(int c);
int	main(void)
{
	printf("%c", ft_tolower('A'));
	return(0);
}
*/

/* char	*ft_strchr(const char *s, int c);
int main(void)
{
    char s[] = "strchr";
    const char* s1;

    printf("s: %s\nc: %c\n", s, 'h');
    s1 = ft_strchr(s, 'h');
    if (s1)
        printf("return: %s\n", s1);
    else
        printf("\n");
    return 0;
}
*/

/* char	*ft_strrchr(const char *s, int c);
int main(void)
{
    char s[] = "strchr";
    const char* s1;

    printf("s: %s\nc: %c\n", s, 'h');
    s1 = ft_strrchr(s, 'h');
    if (s1)
        printf("return: %s\n", s1);
    else
        printf("return: \n");
    return 0;
}
*/

/* int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main(void)
{
	char s1[]= "strncmp";
	char s2[]= "rrr";
	int	ret = ft_strncmp(s1, s2, 3);
	printf ("%d", ret);
	return (0);
}
*/

/* void	*ft_memchr (const void *s, int c, size_t n);
int	main(void)
{
	char s[] = "memchr";
	printf("%s\n", ft_memchr(s, 'c', 2));
	printf("%s\n", ft_memchr(s, 'c', 5));
	return (0);
}
*/

/* int	ft_memcmp(const void *s1, const void *s2, size_t n);
int main(void)
{
	char s1[] = "memcmp";
	char s2[] = "memcmpft";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 7));

	return (0);
}
*/

/* char    *ft_strnstr(const char *big, const char *little, size_t len);
int main()
{
    char big[15] = "strnstr";
 
    char *ret = ft_strnstr(big, "nst", 6);
    printf("%s\n", ret);
 
    return (0);
}
*/

/* int	ft_atoi(const char *nptr);
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
*/

/* void	*ft_calloc(size_t nmemb, size_t size);
int	main(void)
{
	char	*ma;

	ma = ft_calloc(2, 4);
	printf("return: %s\n", ma)
}
*/

/* char	*ft_strdup(const char *s);
int	main(void)
{
	printf("%s\n", ft_strdup("strdup"));
	return (0);
}
*/

/////////////////////////////////////////////////
/// additionals								  ///
/////////////////////////////////////////////////

/* char	*ft_substr(char const *s, unsigned int start, size_t len);
int	main()
{
	char	*subs;

	subs = ft_substr("ft_substr", 4, 6);
	printf("%s\n", subs);
	return (0);
}
*/

/* char	*ft_strtrim(char const *s1, char const *set);
int	main(void)
{
	ft_putendl_fd(ft_strtrim("ft_strtrim", "tr"), 1);
	return (0);
}
*/

/* char	**ft_split(char const *s,  char c);
int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("the ft_split function !", 32);
	i = 0;
	while (i < 5)
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/

/* char	*ft_itoa(int n);
int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(987654321));
	printf("%s\n", ft_itoa(-123456789));
}
*/

/* char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int	main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_striteri(str1, *f);
	printf("%s\n", str2);
}
*/
