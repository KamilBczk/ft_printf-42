/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:04:57 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/22 22:33:09 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *t, ...)
{
    int i;

    i = 0;
    while (t[i] != '\0')
    {
        if (t[i] == '%')
        {
            i++;
            ft_check_percentage(t[i]);
        }
        else
            write(1, &t[i], 1);
        i++;
    }
    return (0);
}

int main(void)
{
    ft_printf("Le caractère : \t\t\t|%c|\n");
    ft_printf("La chaîne de caractère : \t|%s|\n");
    ft_printf("L'argument de pointeur void *: \t|%p|\n");
    ft_printf("Nombre en base 10 : \t\t|%d|\n");
    ft_printf("Entier en base 10 : \t\t|%i|\n");
    ft_printf("Nombre décimal non signé : \t|%u|\n");
    ft_printf("Nombre en héxadécimal base 16 : |%x|\n");
    ft_printf("Pourcentage \t\t\t|%%|");
}