/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:06:08 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/25 17:59:36 by rleseur          ###   ########.fr       */
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

int	ft_puthexa(int nb, char	*hexa)
{
	long	n;
	char	*tab;
	int		len_tab;
	int		i;
	int		count;

	n = nb;
	count = 0;
	if (n == 0)
	{
		count++;
		ft_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			count++;
			n = -n;
		}
		len_tab = ft_len_tab(n);
		tab = malloc((len_tab + 1) * sizeof(char));
		if (!tab)
			return (0);
		i = len_tab - 1;
		while (n > 0)
		{
			tab[i] = hexa[n % 16];
			n /= 16;
			i--;
		}
		tab[len_tab] = '\0';
		count += len_tab;
		ft_putstr(tab);
	}
	return (count);
}
