/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:11:09 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/24 17:24:24 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int nb, int resetstatic)
{
	char			z;
	static int		i;

	if (resetstatic == 0)
		i = 0;
	if (nb >= 10)
	{
		ft_printf_u(nb / 10, 1);
		ft_printf_u(nb % 10, 1);
	}
	else
	{
		i++;
		z = nb + '0';
		write(1, &z, 1);
	}
	return (i);
}

int	ft_printf_d_i(int nb, int resetstatic)
{
	char			z;
	unsigned int	nbr;
	static int		i;

	if (resetstatic == 0)
		i = 0;
	if (nb < 0)
	{
		i++;
		write(1, "-", 1);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int) nb;
	if (nbr >= 10)
	{
		ft_printf_d_i(nbr / 10, 1);
		ft_printf_d_i(nbr % 10, 1);
	}
	else
	{
		i++;
		z = nbr + '0';
		write(1, &z, 1);
	}
	return (i);
}
