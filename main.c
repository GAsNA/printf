/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:56:30 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/26 14:04:49 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"
#include <stdio.h>

int	main(void)
{
	int		len;
	int		len_p;

	len = ft_printf("Affiche un caractere: %c\n", 'c');
	len_p = printf("Affiche un caractere: %c\n", 'c');
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche une chaine de caractere: %s\n", "Bonjour je m'appelle Romane.");
	len_p = printf("Affiche une chaine de caractere: %s\n", "Bonjour je m'appelle Romane.");
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche une adresse: %p\n", "Bonjour je m'appelle Romane.");
	len_p = printf("Affiche une adresse: %p\n", "Bonjour je m'appelle Romane.");
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche un double: %d\n", 42);
	len_p = printf("Affiche un double: %d\n", 42);
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche un integer: %i\n", -42);
	len_p = printf("Affiche un integer: %i\n", -42);
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche un unsigned: %u ???\n", 42);
	len_p = printf("Affiche un unsigned: %u ???\n", 42);
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche un hexa en petit et en grand: %x et %X\n", 142, -142);
	len_p = printf("Affiche un hexa en petit et en grand: %x et %X\n", 142, -142);
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche un signe en pourcentage: %%\n");
	len_p = printf("Affiche un signe en pourcentage: %%\n");
	printf("\tlen: %i ---> %i\n", len, len_p);

	printf("\n\n------- With flags '-' -------\n\n");

	len = ft_printf("Affiche un caractere: %-30c|\n", 'c');
	len_p = printf("Affiche un caractere: %-30c|\n", 'c');
	printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche une chaine de caractere: %-30s|\n", "Bonjour je m'appelle Romane.");
    len_p = printf("Affiche une chaine de caractere: %-30s|\n", "Bonjour je m'appelle Romane.");
    printf("\tlen: %i ---> %i\n", len, len_p);
    len = ft_printf("Affiche une adresse: %-30p|\n", "Bonjour je m'appelle Romane.");
    len_p = printf("Affiche une adresse: %-30p|\n", "Bonjour je m'appelle Romane.");
    printf("\tlen: %i ---> %i\n", len, len_p);
    len = ft_printf("Affiche un double: %-30d|\n", 42);
    len_p = printf("Affiche un double: %-30d|\n", 42);
    printf("\tlen: %i ---> %i\n", len, len_p);
    len = ft_printf("Affiche un integer: %-30i|\n", -42);
    len_p = printf("Affiche un integer: %-30i|\n", -42);
    printf("\tlen: %i ---> %i\n", len, len_p);
    len = ft_printf("Affiche un unsigned: %-30u| ???\n", 42);
    len_p = printf("Affiche un unsigned: %-30u| ???\n", 42);
    printf("\tlen: %i ---> %i\n", len, len_p);
    len = ft_printf("Affiche un hexa en petit: %-30x|\n", 142);
    len_p = printf("Affiche un hexa en petit: %-30x|\n", 142);
    printf("\tlen: %i ---> %i\n", len, len_p);
	len = ft_printf("Affiche un hexa en grand: %-30X|\n", 142);
    len_p = printf("Affiche un hexa en grand: %-30X|\n", 142);
    printf("\tlen: %i ---> %i\n", len, len_p);
	return (0);
}
