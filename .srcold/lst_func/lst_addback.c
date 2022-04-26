/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:25:40 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/11 20:02:41 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_addback(t_list **head, t_list *new_node)
{
	t_list	*last;

	if (!*head)
		*head = new_node;
	else
	{
		last = lst_last(*head);
		last->next = new_node;
		new_node->prev = last;
	}
}
