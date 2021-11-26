/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:45:43 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/26 14:14:58 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

int	display_s(const char *s, va_list args)
{
	int	i;
	int	count;
	int	count_arg;

	count = 0;
	count_arg = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			i = display_w_flag(s, i, args, &count_arg);
		}
		else
		{
			count++;
			ft_putchar(s[i]);
			i++;
		}
	}
	return (count + count_arg);
}

int	display_w_flag(const char *s, int i, va_list args, int *count)
{
	char	*str;
	int		j;
	int		nb;

	str = (char *)s;
	j = 1;
	while (str[i + j] >= '0' && str[i + j] <= '9')
		j++;
	nb = ft_atoi(&str[i + 1]);
	if (str[i] == '-')
	{
		display_arg(s, i + j, args, count);
		while (*count < nb)
		{
			ft_putchar(' ');
			*count += 1;
		}
		j++;
	}
	else
	{
		display_arg(s, i, args, count);
	}
	return (i + j);
}

void	display_arg(const char *s, int i, va_list args, int *count)
{
	if (s[i] == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (s[i] == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (s[i] == 'p')
		*count += ft_putaddr((size_t)va_arg(args, char *));
	else if (s[i] == 'i' || s[i] == 'd' || s[i] == 'u')
		ft_putnbr(va_arg(args, int), &count);
	else if (s[i] == 'x')
		*count += ft_puthexa(va_arg(args, int), "0123456789abcdef");
	else if (s[i] == 'X')
		*count += ft_puthexa(va_arg(args, int), "0123456789ABCDEF");
	else if (s[i] == '%')
		*count += ft_putchar('%');
}
