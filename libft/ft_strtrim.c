/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:47:37 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/16 01:41:41 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!*s1)
		return (ft_strdup(""));
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (s1[j] && is_in_set(s1[j], set))
		j--;
	new = ft_substr(s1, i, (j - i + 1));
	if (!new)
		return (NULL);
	return (new);
}
