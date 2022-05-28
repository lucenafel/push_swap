/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:22:52 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/26 23:09:27 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *stack)
{
	int		sm_index;
	int		i;

	while (stack->stack_a.size != 3)
	{
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
	r_sort_two(&stack->stack_b, 'b');
	sort_three(&stack->stack_a, 'a');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
}
