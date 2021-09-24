/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:48:00 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/24 17:23:46 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *t, ...);
/*	FT_PRINTF NUMBERS	*/
int	ft_printf_u(unsigned int nb, int resetstatic);
int	ft_printf_d_i(int nb, int resetstatic);
/*	FT_PRINTF STRINGS	*/
int	ft_printf_s(char *str);
int	ft_printf_c(char c);

#endif