/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pourcentage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:46:18 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/20 17:43:42 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_pourcentage(const char *s, char pr, int arg)
{
    if (pr == 'c')
        return ;
    else if (pr == 's')
        return ;
    else if (pr == 'p')
        return ;
    else if (pr == 'd')
        return ;
    else if (pr == 'i')
        return ;
    else if (pr == 'u')
        return ;
    else if (pr == 'x')
        return ;
    else if (pr == 'X')
        return ;
    else if (pr == '%')
        return ;
}

int ft_check_pourcentage(const char *s)
{
    int i;
    int f;

    i = 0;
    f = 1;
    while (s[i] != '\0') {
        if (s[i] == '%')
        {
            if (s[i + 1] != '\0')
            {
                ft_print_pourcentage(s, s[i + 1], f);
                f++;
                i++;
            }
            else
                return (-1);
        }
        else
            write(1, &s[i + 1], 1);
        i++;
    }
    return (0);
}