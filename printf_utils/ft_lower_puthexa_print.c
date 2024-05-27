/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_puthexa_print.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:28:40 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/28 00:23:03 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_lower_puthexa_print(long nbr)
{
	int					count;
	static const char	hex_digits[] = "0123456789abcdef";

	count = 0;
	if (nbr < 16)
		count += ft_putchar_print(hex_digits[nbr]);
	else
	{
		count += ft_lower_puthexa_print(nbr / 16);
		count += ft_putchar_print(hex_digits[nbr % 16]);
	}
	return (count);
}
