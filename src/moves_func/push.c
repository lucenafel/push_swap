/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:37:11 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/18 16:25:12 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;
	t_list	*next;

	if (*head_b)
	{
		tmp = *head_b;
		lst_addfront(head_a, lst_new(tmp->content));
		if ((*head_b)->next)
		{
			next = (*head_b)->next;
			next->prev = 0;
			(*head_b)->next = next->next;
			*head_b = next;
		}
		else
			*head_b = 0;
		free(tmp);
	}
}

void	pa(t_list **head_a, t_list **head_b)
{
	push(head_a, head_b);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **head_a, t_list **head_b)
{
	push(head_b, head_a);
	ft_putendl_fd("pb", 1);
}
