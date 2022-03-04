/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:55:19 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/21 09:27:52 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **head)
{
	t_list	*tmp;

	if (*head)
	{
		tmp = lst_pop_first(head);
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
