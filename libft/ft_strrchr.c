/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:46:40 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:47:35 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    unsigned char    a;
    
    a = (unsigned char)c;
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == a)
            return (&s[i]);
        i--;
    }
    return (0);
}