/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:48:00 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/23 19:12:51 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *t, ...);
/*	FT_PRINTF NUMBERS	*/
void	ft_printf_u(unsigned int nb);
void	ft_printf_d_i(int nb);
/*	FT_PRINTF STRINGS	*/
void	ft_printf_s(char *str);
void	ft_printf_c(char c);

#endif