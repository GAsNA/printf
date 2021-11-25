/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:16:47 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/25 17:35:23 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	va_start(args, s);
	count = display_s(s, args);
	return (count);
}
