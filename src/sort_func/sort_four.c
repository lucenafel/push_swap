/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:59:09 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 18:12:02 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stack *stack)
{
	int		sm_index;
	int		i;

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
	sort_three(&stack->stack_a, 'a');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
}
