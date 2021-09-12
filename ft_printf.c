/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:04:57 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/12 22:20:05 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *t, ...)
{
    char pr[100];
    if (ft_check_pourcentage(t, pr) == 0)
        return (0);
    va_list parametersInfos;
    va_start(parametersInfos, t);
    t++;
    printf("%s\n", t);
    return (1);
}

int main(void)
{
    printf("%d\n", ft_printf("%c%d%s%p%d%sssi%u%x%X%%", "sss"));
}