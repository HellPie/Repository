/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 00:01:21 by drossi            #+#    #+#             */
/*   Updated: 2022/01/29 19:48:34 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*head;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	head = f(lst);
	current = head;
	while (lst->next != NULL)
	{
		current->next = f(lst->next);
		if (current->next == NULL)
		{
			while (head != NULL)
			{
				current = head->next;
				free(head);
				head = current;
			}
			return (NULL);
		}
		lst = lst->next;
		current = current->next;
	}
	return (head);
}
