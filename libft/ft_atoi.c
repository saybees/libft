/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:47:53 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:43:41 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int     i;
	int     nb;
	int     sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((8 < nptr[i] && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		sign = sign * -1;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		nb = (nb * 10) + (nptr[i] - 48);
		i++;
	}
	return (nb * sign);
}