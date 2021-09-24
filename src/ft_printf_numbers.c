/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:11:09 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/24 20:35:00 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(unsigned int nb, int *finallen)
{
	char			z;

	if (nb >= 10)
	{
		ft_printf_u(nb / 10, finallen);
		ft_printf_u(nb % 10, finallen);
	}
	else
	{
		*finallen += 1;
		z = nb + '0';
		write(1, &z, 1);
	}
}

void	ft_printf_d_i(int nb, int *finallen)
{
	char			z;
	unsigned int	nbr;

	if (nb < 0)
	{
		*finallen += 1;
		write(1, "-", 1);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int) nb;
	if (nbr >= 10)
	{
		ft_printf_d_i(nbr / 10, finallen);
		ft_printf_d_i(nbr % 10, finallen);
	}
	else
	{
		*finallen += 1;
		z = nbr + '0';
		write(1, &z, 1);
	}
}
