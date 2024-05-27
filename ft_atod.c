/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:15:56 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/27 23:47:09 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	account_to_decimal(const char *str, int i, double decimal)
{
	if (str[i] == '.')
	{
		i++;
		while (ft_isdigit(str[i]) == 1)
		{
			decimal = decimal * 10 + (str[i] - 48);
			i++;
		}
	}
	return (decimal);
}

double	ft_atod(const char *str)
{
	double	num;
	double	decimal;
	int		neg;
	int		i;

	i = 0;
	num = 0;
	decimal = 0;
	neg = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	decimal = account_to_decimal(str, i, decimal);
	return ((num + decimal / 10) * neg);
}
