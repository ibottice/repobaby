/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibottice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:20:31 by ibottice          #+#    #+#             */
/*   Updated: 2025/01/02 18:37:17 by ibottice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	max_int(int n, ...)
{
	va_list	arg; //creo la struttura
	int	max;
	int	current;

	va_start(n, arg); //inizializzo la struttura: n (ultima variabile definita), arg(strutt dove salvare le variabili)
	max = va_arg(arg, int); //ritorna il primo valore della lista (int) e scorre di 1 
	while (n > 0)
	{
		current = va_arg(arg, int);
		if (current > max)
			max = current;
		n--;
	}
	va_end(arg);
	return (max);
}
