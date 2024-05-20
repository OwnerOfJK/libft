/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:32:19 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/20 18:58:16 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_print(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar_print('-');
		n = -n;
	}
	if (n < 10)
		count += ft_putchar_print(n + '0');
	else
	{
		count += ft_putnbr_print(n / 10);
		count += ft_putchar_print('0' + (n % 10));
	}
	return (count);
}
