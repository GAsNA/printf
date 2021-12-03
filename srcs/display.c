/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:45:43 by rleseur           #+#    #+#             */
/*   Updated: 2021/12/03 10:52:50 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	display_s(const char *s, va_list args)
{
	int		i;
	int		count;
	int		count_arg;

	count = 0;
	count_arg = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			display_arg(s, i, args, &count_arg);
		}
		else
		{
			count++;
			ft_putchar(s[i]);
		}
		i++;
	}
	return (count + count_arg);
}

void	display_arg(const char *s, int i, va_list args, int *count)
{
	if (s[i] == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (s[i] == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (s[i] == 'p')
		*count += ft_putaddr((size_t)va_arg(args, char *));
	else if (s[i] == 'i' || s[i] == 'd')
		ft_putnbr(va_arg(args, int), &count);
	else if (s[i] == 'u')
		ft_putnbru((unsigned int)va_arg(args, int), &count);
	else if (s[i] == 'x')
		ft_puthexa(va_arg(args, int), "0123456789abcdef", &count);
	else if (s[i] == 'X')
		ft_puthexa(va_arg(args, int), "0123456789ABCDEF", &count);
	else if (s[i] == '%')
		*count += ft_putchar('%');
}
