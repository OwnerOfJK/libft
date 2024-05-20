/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:48:00 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/20 18:57:56 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr_print(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr_print("(null)");
		return (6);
	}
	while (s[i] != '\0')
	{
		ft_putchar_print(s[i]);
		i++;
	}
	return (i);
}
