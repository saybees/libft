/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:45:17 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:47:14 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t      i;
    size_t      j;

    i = ft_strlen(dest);
    j = 0;
    if (size == 0)
        return (ft_strlen(src));
    if (size < i)
        return (i + size);
    while (src[j] && i + j < size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (i + ft_strlen(src));
}
