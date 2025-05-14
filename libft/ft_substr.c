/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:32:06 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/15 01:19:35 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	char		*str;
	
	j = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (j < len || s[start])
	{
		str[j] = s[start];
		start++;
		j++;
	}
	return (str);
}
