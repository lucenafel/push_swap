/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:37:36 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/11 19:53:49 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_addfront(t_list **head, t_list *new_node)
{
	t_list	*first;

	if (!*head)
	{
		*head = new_node;
		(*head)->next = 0;
		(*head)->prev = 0;
	}
	else
	{
		first = *head;
		new_node->next = first;
		first->prev = new_node;
		*head = new_node;
	}
}
