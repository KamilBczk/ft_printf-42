/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:04:57 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/23 19:40:59 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(unsigned int nb)
{
	
}

void	ft_printf_p(unsigned int var)
{
	char	*x;

	x = "abcdef";
	//printf(" %d ", var%16);
	if (var >= 16)
	{
		ft_printf_p(var/16);
	}
}

void	ft_printf_check_percentage(char s, va_list arg)
{
	if (s == 'c')
		ft_printf_c(va_arg(arg, int));
	else if (s == 's')
		ft_printf_s(va_arg(arg, char *));
	else if (s == 'p')
		ft_printf_p((unsigned long int) va_arg(arg, void *));
	else if (s == 'd')
		ft_printf_d_i(va_arg(arg, int));
	else if (s == 'i')
		ft_printf_d_i(va_arg(arg, int));
	else if (s == 'u')
		ft_printf_u(va_arg(arg, unsigned int));
	else if (s == 'x')
		ft_printf_x(va_arg(arg, unsigned int));
	else if (s == 'X')
		return ;
	else if (s == '%')
		write(1, "%", 1);
}

int	ft_printf(const char *t, ...)
{
	int		i;
	va_list	arg;

	i = 0;
	va_start(arg, t);
	while (t[i] != '\0')
	{
		if (t[i] == '%')
		{
			i++;
			ft_printf_check_percentage((char) t[i], arg);
		}
		else
		{
			write(1, &t[i], 1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	void	*x;
	void	*test;

	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("Le caractère : \t\t\t|%c| |%c|\t\n", 'a', 'z');
	printf("La vraie fonction renvoie : \t|%c| |%c|\n", 'a', 'z');
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("La chaîne de caractère : \t|%s| |%s|\n", "Bonjour", " Kamil");
	printf("La vraie fonction renvoie : \t|%s| |%s|\n", "Bonjour", " Kamil");
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("L'argument de pointeur void *: \t|%p| |%p|\n", x, test);
	printf("La vraie fonction renvoie : \t|%p| |%p|\n", x, test);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("Nombre en base 10 : \t\t|%d| |%d|\n", 123456, -424242);
	printf("La vraie fonction renvoie : \t|%d| |%d|\n", 123456, -424242);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("Entier en base 10 : \t\t|%i| |%i|\n", 123456, -424242);
	printf("La vraie fonction renvoie : \t|%i| |%i|\n", 123456, -424242);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("Nombre décimal non signé : \t|%u| |%u| |%u|\n", -1, 42, 65353);
	printf("La vraie fonction renvoie : \t|%u| |%u| |%u|\n", -1, 42, 65353);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("Nombre en héxadécimal base 16 : |%x| |%x|\n", 922337203, -424242);
	printf("La vraie fonction renvoie : \t|%x| |%x|\n", 922337203, -424242);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("Pourcentage \t\t\t|%%| |%%|\n");
	ft_printf("Le caractère : \t\t\t|%%| |%%|\t\n");
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("                        FINISH                           \n\n");
	ft_printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
