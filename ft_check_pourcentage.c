/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pourcentage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:46:18 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/12 22:09:31 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_pourcentage(const char *s1, char *s)
{
    int i;
    int f;

    i = 0;
    f = 0;
    while (s1[i] != '\0') {
        if (s1[i] == '%')
        {
            i++;
            if (s1[i] == 'c' || s1[i] == 's' || s1[i] == 'p' || s1[i] == 'd' || s1[i] == 'i' || s1[i] == 'u' || s1[i] == 'x' || s1[i] == 'X' || s1[i] == '%')
            {
                s[f] = s1[i];
                f++;
            }
            else
                return (0);
        }
        i++;
    }
    s[f] = '\0';
    return (1);
}
