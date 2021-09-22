/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pourcentage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:46:18 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/22 22:36:27 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_check_percentage(char s)
{
    if (s == 'c')
        return 0;
    else if (s == 's')
        return 0;
    else if (s == 'p')
        return 0;
    else if (s == 'd')
        return 0;
    else if (s == 'i')
        return 0;
    else if (s == 'u')
        return 0;
    else if (s == 'x')
        return 0;
    else if (s == 'X')
        return 0;
    else if (s == '%')
        write(1, "%", 1);
    return (0);
}