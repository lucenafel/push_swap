/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:58:09 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/16 02:06:21 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	base_order_a(t_list **head)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = *head;
	n2 = (*head)->next;
	n3 = (*head)->next->next;
	if (!check_reverse_order(*head))
	{
		ra(head);
		sa(head);
	}
	else if (n1->content < n2->content && n1->content < n3->content)
	{
		sa(head);
		ra(head);
	}
	else if (n1->content < n2->content && n1->content > n3->content)
		rra(head);
	else if (n1->content > n2->content && n1->content < n3->content)
		sa(head);
	else if (n1->content > n2->content && n1->content > n3->content)
		ra(head);
}

void	base_order_b(t_list **head)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = *head;
	n2 = (*head)->next;
	n3 = (*head)->next->next;
	if (!check_crescent_order(*head))
	{
		sb(head);
		rrb(head);
	}
	else if (n1->content < n2->content && n1->content < n3->content)
		rb(head);
	else if (n1->content < n2->content && n1->content > n3->content)
		sb(head);
	else if (n1->content > n2->content && n1->content < n3->content)
		rrb(head);
	else if (n1->content > n2->content && n1->content > n3->content)
	{
		sb(head);
		rb(head);
	}
}