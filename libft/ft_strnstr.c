/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:47:40 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/06 23:21:58 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t		i;
	size_t		j;
	char	*s;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			s = &big[i];
			while (big[i + j] && big[i + j] == little[j] && j < len)
				j++;
			if (little[j] == '\0' || j == len)
				return (s);
		}
		i++;
	}
	return (0);
}