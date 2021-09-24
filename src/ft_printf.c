/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:04:57 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/24 17:24:14 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int nb)
{
	return (0);
}

int	ft_printf_p(unsigned int var)
{
	char	*x;

	x = "abcdef";
	//printf(" %d ", var%16);
	if (var >= 16)
	{
		ft_printf_p(var/16);
	}
	return (0);
}

void	ft_printf_check_percentage(char s, va_list arg, int *finallen)
{
	if (s == 'c')
		*finallen += ft_printf_c(va_arg(arg, int));
	else if (s == 's')
		*finallen += ft_printf_s(va_arg(arg, char *));
	else if (s == 'p')
		*finallen += ft_printf_p((unsigned long int) va_arg(arg, void *));
	else if (s == 'd')
		*finallen += ft_printf_d_i(va_arg(arg, int), 0);
	else if (s == 'i')
		*finallen += ft_printf_d_i(va_arg(arg, int), 0);
	else if (s == 'u')
		*finallen += ft_printf_u(va_arg(arg, unsigned int), 0);
	else if (s == 'x')
		ft_printf_x(va_arg(arg, unsigned int));
	else if (s == 'X')
		return ;
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

int	main(void)
{
	int		ret_ft_printf;
	int		ret_printf;
	void	*x;
	void	*test;

	printf("\n============================= %%d =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%c| |%c|\n", 'a', 'z');
	ret_printf = printf("   printf : \t|%c| |%c|\n", 'a', 'z');
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%s =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%s| |%s|\n", "Bonjour", " Kamil");
	ret_printf = printf("   printf : \t|%s| |%s|\n", "Bonjour", " Kamil");
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%p =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%p| |%p|\n", x, test);
	ret_printf = printf("   printf : \t|%p| |%p|\n", x, test);
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%d =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%d| |%d|\n", 123456, -424242);
	ret_printf = printf("   printf : \t|%d| |%d|\n", 123456, -424242);
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%i =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%i| |%i|\n", 123456, -424242);
	ret_printf = printf("   printf : \t|%i| |%i|\n", 123456, -424242);
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%u =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%u| |%u| |%u|\n", -1, 42, 65353);
	ret_printf = printf("   printf : \t|%u| |%u| |%u|\n", -1, 42, 65353);
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%x =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%x| |%x|\n", 922337203, -424242);
	ret_printf = printf("   printf : \t|%x| |%x|\n", 922337203, -424242);
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%%% =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%%| |%%|\n");
	ret_printf = printf("   printf : \t|%%| |%%|\n");
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("                        FINISH                           \n\n");
	ft_printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
