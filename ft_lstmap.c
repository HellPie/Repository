/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 00:01:21 by drossi            #+#    #+#             */
/*   Updated: 2022/01/29 01:22:20 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*head;
	t_list	*current;

	head = NULL;
	while (lst != NULL)
	{
		current = f(lst);
		if (current == NULL)
		{
			while (head != NULL)
			{
				current = head->next;
				free(head);
				head = current;
			}
			return (NULL);
		}
		if (head == NULL)
			head = current;
		lst = lst->next;
		current = current->next;
	}
	return (head);
}
