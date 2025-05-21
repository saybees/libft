/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 02:05:16 by sabrown           #+#    #+#             */
/*   Updated: 2025/05/12 02:05:16 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*list;
	t_list		*temp;

	list = *lst;
	while (list)
	{
		temp = (list)->next;
		(*del)(list->content);
		free(list);
		list = temp;
	}
	*lst = NULL;
}
