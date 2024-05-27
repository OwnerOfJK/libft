/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_puthexa_print.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:46:54 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/28 00:22:40 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_upper_puthexa_print(long nbr)
{
	int					count;
	static const char	hex_digits[] = "0123456789ABCDEF";

	count = 0;
	if (nbr < 16)
		count += ft_putchar_print(hex_digits[nbr]);
	else
	{
		count += ft_upper_puthexa_print(nbr / 16);
		count += ft_putchar_print(hex_digits[nbr % 16]);
	}
	return (count);
}
