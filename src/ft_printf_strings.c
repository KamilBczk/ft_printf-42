/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:09:12 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/24 17:41:54 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (i + 6);
	}
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	return (i);
}

int	ft_printf_c(char c)
{
	write(1, &c, 1);
	return (1);
}
