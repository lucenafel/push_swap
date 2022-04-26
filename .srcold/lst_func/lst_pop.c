/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:13:01 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/21 08:40:07 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_pop_first(t_list **head)
{
	t_list	*poped;
	t_list	*new_head;

	poped = *head;
	if ((*head)->next)
	{
		new_head = (*head)->next;
		new_head->prev = 0;
		(*head)->next = new_head->next;
		(*head) = new_head;
	}
	else
		*head = 0;
	poped->next = 0;
	poped->prev = 0;
	return (poped);
}
