/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaller <jkaller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:18:20 by jkaller           #+#    #+#             */
/*   Updated: 2024/05/27 21:27:16 by jkaller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*next;
	char		*start;

	if (str)
		next = str;
	if (!next || *next == '\0')
		return (NULL);
	while (*next && ft_strchr(delim, *next))
		next++;
	if (*next == '\0')
		return (NULL);
	start = next;
	while (*next && !ft_strchr(delim, *next))
		next++;
	if (*next)
	{
		*next = '\0';
		next++;
	}
	else
		next = (NULL);
	return (start);
}
