/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:48:00 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/24 21:23:29 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *t, ...);
/*	FT_PRINTF NUMBERS	*/
void	ft_printf_u(unsigned int nb, int *finallen);
void	ft_printf_d_i(int nb, int *finallen);
/*	FT_PRINTF STRINGS	*/
int	ft_printf_s(char *str);
int	ft_printf_c(char c);
/*  FT_PRINTF HEXADECIMAL NUMBERS    */
void	ft_printf_p(unsigned long int nb, int *finallen);
void ft_printf_hexadecimal(unsigned long int nb, int *finallen);
void	ft_printf_x(unsigned int nb, int *finallen, int tohex);

#endif