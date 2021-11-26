/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:13:05 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/26 13:54:36 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

void	put_flag_minus(const char *s, int i, va_list args, int *count)
{
		int		nb;
		char	*str;

		str = (char *)s;
		nb = ft_atoi(str);
		display_arg(s, i, args, count);
		printf("count, nb: %i, %i\n", *count, nb);
        while (*count < nb)
        {
            ft_putchar(' ');
            *count += 1;
        }
}
