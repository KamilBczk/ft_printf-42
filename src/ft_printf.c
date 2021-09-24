/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:04:57 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/24 21:44:41 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_check_percentage(char s, va_list arg, int *finallen)
{
	if (s == 'c')
		*finallen += ft_printf_c(va_arg(arg, int));
	else if (s == 's')
		*finallen += ft_printf_s(va_arg(arg, char *));
	else if (s == 'p')
		ft_printf_p((unsigned long int) va_arg(arg, void *), finallen);
	else if (s == 'd')
		ft_printf_d_i(va_arg(arg, int), finallen);
	else if (s == 'i')
		ft_printf_d_i(va_arg(arg, int), finallen);
	else if (s == 'u')
		ft_printf_u(va_arg(arg, unsigned int), finallen);
	else if (s == 'x')
		ft_printf_x(va_arg(arg, unsigned long int), finallen, 32);
	else if (s == 'X')
		ft_printf_x(va_arg(arg, unsigned long int), finallen, 0);
	else if (s == '%')
	{
		*finallen += 1;
		write(1, "%", 1);
	}
}

int	ft_printf(const char *t, ...)
{
	int		i;
	int		finallen;
	va_list	arg;

	i = 0;
	finallen = 0;
	va_start(arg, t);
	while (t[i] != '\0')
	{
		if (t[i] == '%')
		{
			i++;
			ft_printf_check_percentage((char) t[i], arg, &finallen);
		}
		else
		{
			finallen++;
			write(1, &t[i], 1);
		}
		i++;
	}
	return (finallen);
}
