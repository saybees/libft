/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:45:22 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/16 01:20:39 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numberlen(int n)
{
	int		l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		l++;
	while (n)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;
	int		l;

	i = 0;
	l = ft_numberlen(n);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	nbr = (long) n;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[i] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[l - i++ - 1] = (nbr % 10) + 48;
		nbr /= 10;
	}
	str[l] = '\0';
	return (str);
}
