/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:29:50 by jkaller           #+#    #+#             */
/*   Updated: 2023/11/27 18:20:24 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_print(char c);
int		ft_lower_puthexa_print(long nbr);
int		ft_upper_puthexa_print(long nbr);
int		ft_putstr_print(char *s);
int		ft_putptr_print(unsigned long n);
int		ft_putnbr_print(long n);
int		ft_putunbr_print(unsigned long n);
int		ft_strlen_print(char const *str);

#endif