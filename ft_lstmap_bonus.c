/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 02:05:59 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/16 01:22:04 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*liste;
	t_list		*temp;
	void		*tmp;

	liste = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		if (!tmp)
		{
			ft_lstclear(&liste, del);
			return (NULL);
		}
		temp = ft_lstnew(tmp);
		if (!temp)
		{
			ft_lstclear(&liste, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&liste, temp);
		lst = lst->next;
	}
	return (liste);
}
