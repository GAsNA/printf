/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:02:57 by rleseur           #+#    #+#             */
/*   Updated: 2021/12/03 10:24:32 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	ft_putnbr(int nb, int **count)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		**count += 1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
	**count += 1;
}

void	ft_putnbru(unsigned int nb, int **count)
{
	unsigned long	n;

	n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
	**count += 1;
}
