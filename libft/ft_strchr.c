/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:46:25 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:47:00 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int     i;
    unsigned char    a;
    
    a = (unsigned char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == a)
            return(&s[i]);
        i++;
    }
    return (0);
}