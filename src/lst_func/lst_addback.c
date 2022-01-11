/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:25:40 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/06 19:09:06 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_addback(t_list **head, t_list **tail, t_list *new_node)
{
	t_list	*last;

	if (!*head && !*tail)
	{
		*head = new_node;
		*tail = new_node;
	}
	else
	{
		last = *tail;
		last->next = new_node;
		new_node->prev = last;
		*tail = new_node;
	}
}
