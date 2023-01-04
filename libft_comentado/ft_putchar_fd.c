/* NOMBRE: ft_putchar_fd
DESC: envía el caracter 'c' al file descriptor especificado
PARAMS: c (el caracter a enviar) y fd (el file descriptor sobre el que escribir)
RETURN: nada */

#include <unistd.h> // contiene write

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1); // enviamos el caracter c a nuestro file descriptor
}
