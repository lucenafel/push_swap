/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:22:52 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/06/01 14:42:00 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *stack)
{
	while (stack->stack_a.size != 3)
		find_next(stack);
	r_sort_two(&stack->stack_b, 'b');
	sort_three(&stack->stack_a, 'a');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
	exec_push(&stack->stack_b, &stack->stack_a, 'a');
}
