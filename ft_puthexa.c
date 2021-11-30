/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:06:08 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/30 10:41:24 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

int	ft_len_tab(long n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	ft_puthexa(int nb, char *hexa, int **count)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		**count += 1;
		ft_putchar('-');
	}
	if (n >= 16)
	{
		ft_puthexa(n / 16, hexa, count);
		ft_putchar(hexa[n % 16]);
	}
	else
		ft_putchar(hexa[n]);
	**count += 1;
}
