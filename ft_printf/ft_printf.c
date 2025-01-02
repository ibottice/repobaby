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

int	ft_formatter(const char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar((char *)va_arg(args, int));
	if (c == 'd' || c == 'i')
		count += ft_putnbr_base(va_arg(args, int));
	if (c == 's')
		count += ft_putchar()


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
			count = ft_formatter(format[i], args);
			count++;
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
