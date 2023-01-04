#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	char s1[]= "strmcmp";
	char s2[]= "rrr";
	int	ret = ft_strncmp(s1, s2, 3); // es el retorno + ó - según el 'n' que le pasamos: 3 en este ejemplo;
	printf ("%d", ret);
	return (0);
}
*/

/*
*/