/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:58:54 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/06/01 14:42:24 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	find_smaller(t_list *stack)
{
	int		i;
	long	smaller;

	smaller = stack->content[0];
	i = 1;
	while (i < stack->size)
	{
		if (stack->content[i] < smaller)
			smaller = stack->content[i];
		i++;
	}
	return (smaller);
}

int	find_index(t_list *stack)
{
	int		i;
	long	smaller;

	smaller = find_smaller(stack);
	i = 0;
	while (stack->content[i] != smaller)
		i++;
	return (i);
}

void	find_next(t_stack *stack)
{
	int	sm_index;
	int	i;

	sm_index = find_index(&stack->stack_a);
	if (sm_index < stack->stack_a.size / 2)
	{
		i = 0;
		while (i < sm_index)
		{
			exec_rotate(&stack->stack_a, 'a');
			i++;
		}
	}
	else
	{
		i = stack->stack_a.size - sm_index;
		while (i > 0)
		{
			exec_rev_rotate(&stack->stack_a, 'a');
			i--;
		}
	}
	exec_push(&stack->stack_a, &stack->stack_b, 'b');
}
