/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:59:37 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/10 17:07:03 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *stack)
{
	int	tmp;

	if (stack->size >= 2)
	{
		tmp = stack->content[0];
		stack->content[0] = stack->content[1];
		stack->content[1] = tmp;
	}
}

void	sa(t_list *stack)
{
	swap(stack);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list *stack)
{
	swap(stack);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}
