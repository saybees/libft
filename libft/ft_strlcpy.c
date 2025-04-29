/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:41:25 by sabrown           #+#    #+#             */
/*   Updated: 2025/04/29 22:51:01 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int     ft_strlen(const char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}


size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t     l;
    size_t     i;

    l = ft_strlen(src);
    i = 0;
    if (l >= size)
    {
        while (i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        if (size != 0)
            dest[i] = '\0';
    }
    return (l);
}

#include <stdio.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
 //   int r;
    int s;

 //   r = strlcpy(buffer,string,size);
    s = ft_strlcpy(buffer,string,size);

 //   printf("real one Copied '%s' into '%s', length %d\n",
  //          string,
  //          buffer,
 //           r
 //         );
    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            s
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}