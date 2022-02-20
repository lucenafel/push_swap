/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:38:35 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/20 17:35:23 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_next(t_list **stack, t_list *median)
{
	int		i;
	int		stack_size;
	t_list	*copy;

	i = 1;
	copy = lst_dup(*stack);
	stack_size = lst_size(*stack) / 2;
	if (stack_size % 2 != 0)
		stack_size += 1;
	while (copy->content > median->content)
	{
		copy = copy->next;
		i++;
	}
	lst_clear(&copy);
	while ((*stack)->content >= median->content)
	{
		if (i <= stack_size)
			ra(stack);
		else
			rra(stack);
	}
}

void	order_five(t_list **stack_a)
{
	t_list	*stack_b;
	t_list	*median;
	t_list	*copy;

	stack_b = 0;
	copy = lst_dup(*stack_a);
	q_sort(copy, lst_last(copy));
	median = get_median(copy);
	while (lst_size(*stack_a) != 3)
	{
		find_next(stack_a, median);
		pb(stack_a, &stack_b);
	}
	lst_clear(&copy);
	base_order_two_b(&stack_b);
	if (check_crescent_order(*stack_a))
		base_order_three_a(stack_a);
	pa(stack_a, &stack_b);
	pa(stack_a, &stack_b);
}
