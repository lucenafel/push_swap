/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:55:19 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/19 22:25:44 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **head)
{
	t_list	*next;
	t_list	*tmp;

	if (*head)
	{
		tmp = *head;
		next = (*head)->next;
		(*head)->next = next->next;
		(*head) = next;
		tmp->next = 0;
		tmp->prev = 0;
		lst_addback(head, tmp);
	}
}

void	ra(t_list **head)
{
	rotate(head);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **head)
{
	rotate(head);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **head_a, t_list **head_b)
{
	rotate(head_a);
	rotate(head_b);
	ft_putendl_fd("rr", 1);
}
