/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:46:52 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/16 01:31:55 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int		w;
	int		n;

	w = 0;
	while (s)
	{
		if (*s != c && !w)
		{
			w = 1;
			n = 1;
		}
		if (*s == c && w)
			w = 0;
		s++;
	}
	return (n);
}

char	*ft_newstr(const char **s, char c)
{
	char	*str;
	int		i;

	while (**s == c)
		s++;
	i = 0;
	while (**s != c && **s != '\0')
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, *s, i + 1);
	return (str);
}

void	ft_free(char **s)
{
	int		i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**new;

	i = 0;
	n = ft_countwords(s, c);
	new = malloc(sizeof(char *) * n + 1);
	if (!new)
		return (NULL);
	while (i < n)
	{
		new[i] = ft_newstr(&s, c);
		if (new[i] == NULL)
		{
			ft_free(new);
			new = NULL;
			break ;
		}
	i++;
	}
	return (new);
}
