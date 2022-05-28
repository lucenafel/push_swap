/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:03:54 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/26 23:09:36 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list *stack, char s_name)
{
	int		pivot_idx;
	long	pivot;

	pivot = get_pivot(stack);
	pivot_idx = get_pivot_index(stack, pivot);
	if (pivot_idx == 0 && stack->content[1] < pivot)
		exec_swap(stack, s_name);
	else if (pivot_idx == 0 && stack->content[1] > pivot)
		exec_rev_rotate(stack, s_name);
	else if (pivot_idx == 1 && stack->content[0] > pivot)
	{
		exec_rotate(stack, s_name);
		exec_swap(stack, s_name);
	}
	else if (pivot_idx == 2 && stack->content[0] < pivot)
	{
		exec_rev_rotate(stack, s_name);
		exec_swap(stack, s_name);
	}
	else if (pivot_idx == 2 && stack->content[0] > pivot)
		exec_rotate(stack, s_name);
}

void	r_sort_three(t_list *stack, char s_name)
{
	int		pivot_idx;
	long	pivot;

	pivot = get_pivot(stack);
	pivot_idx = get_pivot_index(stack, pivot);
	if (pivot_idx == 0 && stack->content[1] < pivot)
		exec_rev_rotate(stack, s_name);
	else if (pivot_idx == 0 && stack->content[1] > pivot)
		exec_swap(stack, s_name);
	else if (pivot_idx == 1 && stack->content[0] < pivot)
	{
		exec_swap(stack, s_name);
		exec_rev_rotate(stack, s_name);
	}
	else if (pivot_idx == 2 && stack->content[0] < pivot)
		exec_rotate(stack, s_name);
	else if (pivot_idx == 2 && stack->content[0] > pivot)
	{
		exec_swap(stack, s_name);
		exec_rotate(stack, s_name);
	}
}
