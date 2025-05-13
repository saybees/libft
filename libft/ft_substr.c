/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:32:06 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/14 00:56:47 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t		i;
	size_t		j;
	char		*str;
	
	i = (size_t)start;
	j = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (j < len || s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
