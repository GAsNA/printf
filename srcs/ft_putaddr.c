/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:54:43 by rleseur           #+#    #+#             */
/*   Updated: 2021/12/03 10:24:03 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_putaddr(size_t num)
{
	char	str[255];
	int		i;
	int		len;

	if (!num)
		return (ft_putstr("0x0"));
	i = 0;
	while (num > 0)
	{
		str[i] = ("0123456789abcdef"[num % 16]);
		num = num / 16;
		i++;
	}
	len = i;
	ft_putstr("0x");
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (len + 2);
}
