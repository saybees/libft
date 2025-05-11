/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:11:29 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:46:33 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t      i;
    char    *str;
    
    i = 0;
    str = (char *)s;
    while (str[i] || i < n - 1)
    {
        str[i] = c;
        i++;
    }
    return (str);
}