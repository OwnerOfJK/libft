/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:47:12 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/28 00:22:57 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_print(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr_print(va_arg(args, char *));
	else if (c == 'p')
		count = ft_putptr_print((unsigned long)va_arg(args, void *));
	else if (c == 'i' || c == 'd')
		count = ft_putnbr_print(va_arg(args, int));
	else if (c == 'u')
		count = ft_putunbr_print(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_lower_puthexa_print(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_upper_puthexa_print(va_arg(args, unsigned int));
	else if (c == '%')
		count = ft_putchar_print(c);
	else
		count = ft_putchar_print(va_arg(args, int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		result;
	int		format_len;

	i = 0;
	result = 0;
	format_len = ft_strlen_print(format);
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{
			result += print(format[i + 1], args);
			format_len -= 2;
			if (format[i + 2] == '\0')
				return (result + format_len);
			i += 2;
		}
		ft_putchar_print(format[i]);
		i++;
	}
	return (result + format_len);
}
