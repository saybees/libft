/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:40:00 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 03:00:07 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t		i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (s == d || n == 0)
		return (dest);
	if (d < s)
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = n;
		while (--i >= 0)
			d[i] = s[i];
	}
	return (dest);
}
