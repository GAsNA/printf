/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:13:05 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/30 10:53:28 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

void	init_flags(struct s_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->point = 0;
	flags->hash = 0;
	flags->space = 0;
	flags->plus = 0;
}
