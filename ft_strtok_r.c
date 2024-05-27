/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 23:24:52 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/27 23:24:55 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
{
	char	*end;

	if (str == NULL)
		str = *saveptr;
	if (!*str) 
	{
		*saveptr = str;
		return (NULL);
	}
	end = str + ft_strcspn(str, delim);
	if (*end) 
	{
		*end = '\0';
		*saveptr = end + 1;
	}
	else 
		*saveptr = end;
	return (str);
}
