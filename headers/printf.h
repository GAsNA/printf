/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:25:01 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/25 17:57:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);

int		display_s(const char *s, va_list args);
void	display_arg(const char *s, int i, va_list args, int *count);

int		ft_putchar(char c);

int		ft_putstr(char *str);

void	ft_putnbr(int nb, int *count);

int		ft_puthexa(int nb, char *hexa);

int		ft_putaddr(size_t num);

#endif
