/* NOMBRE: bzero
DESC: convierte en nulos los primeros 'n' caracteres de una str 's'
RETURN: el string modificado */

#include <stdlib.h> // contiene size_t
#include <string.h> // contiene strcpy
#include <stdio.h> // contiene puts y printf


void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p; // declaración de sustituto del prototipo
	size_t			i; // declaro contador

	i = 0; // inicio contador
	p = s; // declaro a p igual a s para convertirlo en unsigned char y poder modificarlo
	while (i < n) // creo un bucle que se mueva por el array mientras sea menor al valor de 'n'
	{
		p[i] = 0; // la posicion de i la convierto en 0 mientras i avanza por el array
		i++;
	}
	return ((void *)p); // convertimos a p en void nuevamente para obtener un retorno
}

int main(void)
{
    char s[30];
    strcpy(s, "bzero"); // copiamos el string
    puts(s); // la ft "puts" se usa para escribir una secuencia de caracteres
    ft_bzero(s, 5); // llamamos a la función
    puts(s); // imprime el string modificado
	printf ("%c", s[7]);
    return (0);
}
