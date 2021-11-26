/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:02:57 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/26 09:08:30 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

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
