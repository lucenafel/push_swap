/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:53:03 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/06/23 16:12:59 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_less3_a(t_stack *stack)
{
	if (stack->stack_a.size == 2)
		sort_two(&stack->stack_a, 'a');
	else
		sort_three(&stack->stack_a, 'a');
}

void	sort_less3_b(t_stack *stack)
{
	if (stack->stack_b.size == 2)
		r_sort_two(&stack->stack_b, 'b');
	else
		r_sort_three(&stack->stack_b, 'b');
}
void	sort_rec_a(t_stack *stack, int start, int end)
{
	long	pivot;
	int		i;

	if (stack->stack_a.size <= 3) {
		sort_less3_a(stack);
		return ;
	}
	pivot = get_pivot(&stack->stack_a);
	i = start;
	while (i < end)
	{
		if (stack->stack_a.content[i] <= pivot)
		{
			exec_push(&stack->stack_a, &stack->stack_b, 'b');
			if (stack->stack_a.content[i] == pivot && stack->stack_a.content[i + 1] > pivot)
			{
				exec_rr(stack);
				continue ;
			}
			else
				exec_rotate(&stack->stack_b, 'b');
			exec_rotate(&stack->stack_a, 'a');
		}
		i++;
	}
}

void	sort_rec_b(t_stack *stack)
{
	long	pivot;

	if (stack->stack_b.size <= 3) {
		sort_less3_b(stack);
		return ;
	}
	pivot = get_pivot(&stack->stack_b);
}
