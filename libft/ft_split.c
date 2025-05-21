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

static int	ft_endword(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_countwords(char const *s, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			n++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n);
}

static void	ft_free(char **s)
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

static char	*ft_newstr(const char *s, char c)
{
	char	*str;
	int		len;

	len = ft_endword(s, c);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	ft_strlcpy(str, s, (len + 1));
	str[len] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**new;

	i = 0;
	new = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!new)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			new[i] = ft_newstr(s, c);
			if (!new[i++])
			{
				ft_free(new);
				return (NULL);
			}
			s += ft_endword(s, c);
		}
	}
	new[i] = NULL;
	return (new);
}
