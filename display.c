/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:45:43 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/25 18:12:24 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

int	display_s(const char *s, va_list args)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] == '%')
		{
			i++;
			display_arg(s, i, args, &count);
		}
		else
		{
			count++;
			ft_putchar(s[i]);
		}
	}
	return (count - 1);
}

void	display_arg(const char *s, int i, va_list args, int *count)
{
	if (s[i] == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (s[i] == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (s[i] == 'p')
		*count += ft_putaddr((size_t)va_arg(args, char *));
	else if (s[i] == 'i' || s[i] == 'd' || s[i] == 'u') // COUNT ???
	{
		if (s[i] == 'u')
			ft_putnbr((unsigned int)va_arg(args, int), count);
		else
			ft_putnbr(va_arg(args, int), count);
	}
	else if (s[i] == 'x')
		*count += ft_puthexa(va_arg(args, int), "0123456789abcdef");
	else if (s[i] == 'X')
		*count += ft_puthexa(va_arg(args, int), "0123456789ABCDEF");
	else if (s[i] == '%')
		*count += ft_putchar('%');
}
