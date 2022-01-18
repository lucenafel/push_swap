/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:55:38 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/18 16:25:39 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **head)
{
	t_list	*last;
	t_list	*prev;

	if (*head)
	{
		last = lst_last(*head);
		prev = last->prev;
		prev->next = 0;
		lst_addfront(head, last);
	}
}

void	rra(t_list **head)
{
	reverse_rotate(head);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **head)
{
	reverse_rotate(head);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **head_a, t_list **head_b)
{
	reverse_rotate(head_a);
	reverse_rotate(head_b);
	ft_putendl_fd("rrr", 1);
}
