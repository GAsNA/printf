/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:56:30 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/25 18:15:07 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"
#include <stdio.h>

int	main(void)
{
	int	len;

	len = ft_printf("Affiche un caractere: %c\n", 'c');
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche une chaine de caractere: %s\n",
			"Bonjour je m'appelle Romane.");
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche une adresse: %p\n", "Bonjour je m'appelle Romane.");
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche un double: %d\n", 42);
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche un integer: %i\n", -42);
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche un unsigned: %u ???\n", -42);
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche un hexa en petit et en grand: %x et %X\n",
			142, -142);
	printf("\tlen: %i\n", len);
	len = ft_printf("Affiche un signe en pourcentage: %%\n");
	printf("\tlen: %i\n", len);
	return (0);
}
