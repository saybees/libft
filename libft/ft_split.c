/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:46:52 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:46:52 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	size_t	w;
	size_t	n;

	w = 0;
	while (str)
	{
		if (str != c && !w)
		{
			w = 1;
			n = 1;
		}
		if (str == c && w)
			w = 0;
		str++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char	**new;

	new = malloc(sizeof(char *) * ft_countwords(s, c) + 1);
	if (!new)
		return (NULL);
}
