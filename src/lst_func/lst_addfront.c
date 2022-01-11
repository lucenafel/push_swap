/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:37:36 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/06 19:09:06 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_addfront(t_list **head, t_list **tail, t_list *new_node)
{
	t_list	*first;

	if (!*head && !*tail)
	{
		*head = new_node;
		*tail = new_node;
	}
	else
	{
		first = *head;
		new_node->next = first;
		first->prev = new_node;
		*head = new_node;
	}
}
