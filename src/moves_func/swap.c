/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:53:46 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/21 15:47:50 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **head)
{
	t_list	*second;
	t_list	*third;

	if (*head && (*head)->next)
	{
		second = (*head)->next;
		third = second->next;
		if (third)
		{
			(*head)->next = third;
			third->prev = (*head);
		}
		else
			(*head)->next = NULL;
		second->prev = NULL;
		second->next = *head;
		*head = second;
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
