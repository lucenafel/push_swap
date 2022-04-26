/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:37:11 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/21 09:27:38 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **head_a, t_list **head_b)
{
	t_list	*poped;

	if (*head_b)
	{
		poped = lst_pop_first(head_b);
		lst_addfront(head_a, poped);
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
