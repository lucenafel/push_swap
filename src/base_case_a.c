/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_case_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:53:41 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/15 21:49:57 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	base_order_three(t_list *head)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = head;
	n2 = head->next;
	n3 = head->next->next;
	if (!check_reverse_order(head))
	{
		ra(&head);
		sa(&head);
	}
	else if (n1->content < n2->content && n3->content < n2->content)
	{
		sa(&head);
		ra(&head);
	}
	else if (n1->content < n2->content && n1->content > n3->content)
		rra(&head);
	else if (n1->content > n2->content && n1->content < n3->content)
		sa(&head);
	else if (n1->content > n2->content && n1->content > n3->content)
		ra(&head);
}