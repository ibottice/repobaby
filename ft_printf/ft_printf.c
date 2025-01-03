/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibottice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:08:23 by ibottice          #+#    #+#             */
/*   Updated: 2025/01/02 18:01:18 by ibottice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_formatter(const char c, int *count, va_list args)
{
	if (c == 'c')
		ft_count_putchar(va_arg(args, char), count);
	else if (c == 'd' || c == 'i')
		ft_count_putnbr(va_arg(args, int), count);
	else if (c == 's')
		ft_count_putstr(va_arg(args, char*), count);
	else if (c == 'u')
		ft_count_unint(va_arg(args, unsigned int), count);
	else if (c == 'x')
		ft_count_low_hex(va_arg(args, unsigned int), count);
	else if (c == 'X')
		ft_count_up_hex(va_arg(args, unsigned int), count);
	else if (c == 'p')
		ft_count_ptr(va_arg(args, void *), count);
	else if (c == %)
		ft_count_putchar('%', count);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format [i + 1])
		{
			i++;
			ft_formatter(format[i], &count, args);
		}
		else
			ft_count_putchar(format[i], count);
		i++;
	}
	va_end(args);
	return (count);
}
