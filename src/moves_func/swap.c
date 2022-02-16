/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:53:46 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/16 01:16:19 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **head)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (*head && (*head)->next)
	{
		first = (*head);
		second = (*head)->next;
		third = (*head)->next->next;
		if (third)
		{
			third->prev = first;
			first->next = third;
		}
		else
			first->next = 0;
		second->next = first;
		second->prev = 0;
		first->prev = second;
		(*head) = second;
	}
}

void	sa(t_list **head)
{
	swap(head);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **head)
{
	swap(head);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **head_a, t_list **head_b)
{
	swap(head_a);
	swap(head_b);
	ft_putendl_fd("ss", 1);
}
