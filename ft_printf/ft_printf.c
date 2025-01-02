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

void	ft_formatter(const char c, int *count, va_list args)
{
	if (c == 'c')
		ft_putchar(c, count);
	if (c == 'd' || c == 'i')
		ft_putnbr_base(va_arg(args, int) count);
	if (c == 's')
		ft_count_putchar()


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
		{
			ft_count_putchar(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}
