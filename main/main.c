/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:29:47 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/24 21:35:22 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/ft_printf.h"

int	main(void)
{
	int		ret_ft_printf;
	int		ret_printf;
	void	*x;
	void	*test;

	printf("\n============================= %%c =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%c| |%c|\n", 'a', 'z');
	ret_printf = printf("   printf : \t|%c| |%c|\n", 'a', 'z');
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%s =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%s| |%s| |%s|\n", "Bonjour", " Kamil", NULL);
	ret_printf = printf("   printf : \t|%s| |%s| |%s|\n", "Bonjour", " Kamil", NULL);
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
	printf("\n============================= %%X =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%X| |%X|\n", 922337203, -424242);
	ret_printf = printf("   printf : \t|%X| |%X|\n", 922337203, -424242);
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	printf("\n============================= %%%% =============================\n\n");
	ret_ft_printf = ft_printf("ft_printf : \t|%%| |%%|\n");
	ret_printf = printf("   printf : \t|%%| |%%|\n");
	printf("\nValeur retournées :\tft_printf : \t%d\n\t\t\tprintf : \t%d\n", ret_ft_printf, ret_printf);
	ft_printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	ft_printf("                        FINISH                           \n\n");
	ft_printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
