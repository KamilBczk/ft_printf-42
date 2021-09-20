/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:04:57 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/20 17:43:23 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *t, ...)
{
    int i;

    i = 0;
    if(ft_check_pourcentage(t) == -1)
        return (-1);
    return (0);
}

int main(void)
{
    printf("\n%d", ft_printf("%d%s%% x%sss", "A"));
}