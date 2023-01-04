/* NOMBRE: ft_putstr_fd
DESC: envía el string 's' al file descriptor especificado
PARAMS: s (el string a enviar) y fd (el file descriptor sobre el que escribir)
RETURN: nada */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s)); // guardamos el string en el file descriptor
}
