#include <unistd.h>
#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, &*s++, 1);
}
