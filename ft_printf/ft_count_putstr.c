#include "ft_printf.h"

void	ft_count_putstr(char *str, int *count)
{
	while (*str)
	{
		ft_count_putchar(*str, count);
		str++;
	}
}
