/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:39:34 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/28 00:22:49 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	put_ptr_char_print(unsigned long n)
{
	int					count;
	static const char	digits[] = "0123456789abcdef";

	count = 0;
	if (n >= 16)
	{
		count += put_ptr_char_print(n / 16);
	}
	count += ft_putchar_print(digits[n % 16]);
	return (count);
}

int	ft_putptr_print(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += ft_putstr_print("(nil)");
		return (count);
	}
	else
		count += ft_putstr_print("0x");
	count += put_ptr_char_print(n);
	return (count);
}
