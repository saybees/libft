/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:47:12 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/07 00:47:39 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t      i;
    char    *str;
    unsigned char    a;
    
    i = 0;
    str = (char *)s;
    a = (unsigned char)c;
    while (i < n)
    {
        if (str[i] == a)
            return(&s[i]);
        i++;
    }
    return (0);
}