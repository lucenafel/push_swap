/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:38:35 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/19 20:35:48 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_five(t_list **stack_a)
{
	t_list	*stack_b;
	t_list	*median;
	t_list	*copy;

	stack_b = 0;
	copy = lst_dup(*stack_a);
	q_sort(copy, lst_last(copy));
	median = get_median(copy);
	while (lst_size(*stack_a) > 3)
	{
		if ((*stack_a)->content > median->content)
			pb(stack_a, &stack_b);
		ra(stack_a);
	}
	base_order_two_b(&stack_b);
	base_order_three_a(stack_a);
	pa(&stack_b, stack_a);
	pa(&stack_b, stack_a);
	ra(stack_a);
	ra(stack_a);
	lst_clear(&copy);
}
