/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:06:08 by rleseur           #+#    #+#             */
/*   Updated: 2021/12/03 10:52:38 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	ft_puthexa(int nb, char *hexa, int **count)
{
	long	n;

	n = nb;
	if (n < 0)
		n += 4294967296;
	if (n >= 16)
	{
		ft_puthexa(n / 16, hexa, count);
		ft_putchar(hexa[n % 16]);
	}
	else
		ft_putchar(hexa[n]);
	**count += 1;
}
