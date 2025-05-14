/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:45:22 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:45:22 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numberlen(int n)
{
	int		l;

	l = 1;
	if (n < 0)
	{
		l++;
		n *= -1;
	}
	while (n > 1)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_power(nb, power - 1));
}

void	ft_strfill(char *str, int n, int l)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		str[i] = "-";
		n *= -1;
		i++;
		l--;
	}
	l--;
	while (l != 0)
	{
		str[i] = n / ft_power(10, l);
		n = n - 
		i++;
		l--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;

	l = ft_numberlen(n);
	str = malloc(sizeof(char) * l + 1);
	if (!str)
		return (NULL);

}
