/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:47:37 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 00:47:37 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t		i;
	size_t		j;
	size_t		l;

	i = 0;
	j = ft_strlen(s1);
	if (!*s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	if (i == j)
		return (NULL);
	l = j - i + 1;
	while (--i >= 0)
		s1++;
	new = malloc(sizeof(char) * l + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, l);
	return (new);
}
