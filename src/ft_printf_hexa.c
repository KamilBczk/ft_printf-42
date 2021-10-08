/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:21:48 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/10/01 14:27:47 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(unsigned int nb, int *finallen, int tohex)
{
	char	z;

	if (nb >= 16)
	{
		ft_printf_x(nb / 16, finallen, tohex);
		ft_printf_x(nb % 16, finallen, tohex);
	}
	else if (nb < 10)
	{
		*finallen += 1;
		z = nb + '0';
		write(1, &z, 1);
	}
	else
	{
		*finallen += 1;
		z = nb - 10 + '0' + 17 + tohex;
		write(1, &z, 1);
	}
}

void	ft_printf_hexadecimal(unsigned long int nb, int *finallen)
{
	char	z;

	if (nb >= 16)
	{
		ft_printf_hexadecimal(nb / 16, finallen);
		ft_printf_hexadecimal(nb % 16, finallen);
	}
	else if (nb < 10)
	{
		*finallen += 1;
		z = nb + '0';
		write(1, &z, 1);
	}
	else
	{
		*finallen += 1;
		z = nb - 10 + '0' + 17 + 32;
		write(1, &z, 1);
	}
}

void	ft_printf_p(unsigned long int nb, int *finallen)
{
	write(1, "0x", 2);
	*finallen += 2;
	ft_printf_hexadecimal(nb, finallen);
}
