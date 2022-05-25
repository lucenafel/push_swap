/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:22:52 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/25 17:20:57 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *stack)
{
	int		sm_index;
	int		i;
	int		j;

	j = 0;
	while (j < 2)
	{
		sm_index = find_index(&stack->stack_a);
		if (sm_index >= 2)
			i = sm_index;
		else
			i = stack->stack_a.size - sm_index;
		while (i < stack->stack_a.size)
		{
			if (sm_index < 2)
				exec_rotate(&stack->stack_a, 'a');
			else
				exec_rev_rotate(&stack->stack_a, 'a');
			i++;
		}
		exec_push(&stack->stack_a, &stack->stack_b, 'b');
		j++;
	}
	sort_three(&stack->stack_a, 'a');
	r_sort_two(&stack->stack_b, 'b');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
}
