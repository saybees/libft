/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:16:12 by sabrown           #+#    #+#             */
/*   Updated: 2025/04/29 21:25:55 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *s;
    char    *d;
    size_t      i;
    
    s = (char *)src;
    d = (char *)dest;
    i = 0;
    while (s[i] || i < n)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (d);
}
