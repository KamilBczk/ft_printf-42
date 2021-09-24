/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:09:12 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/24 14:33:25 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_printf_c(char c)
{
	write(1, &c, 1);
}
