/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:05:20 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/20 16:35:33 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*shift_a(t_list *stack)
{
	long	*new_ptr;
	int		i;

	i = 0;
	if (stack->size == 1)
		new_ptr = (long *)malloc(sizeof(long) * 1);
	else
	{
		stack->size--;
		new_ptr = (long *)malloc(sizeof(long) * stack->size);
	}
	while (i < stack->size)
	{
		new_ptr[i] = stack->content[i + 1];
		i++;
	}
	free(stack->content);
	return (new_ptr);
}

static long	*shift_b(t_list *stack)
{
	long	*new_ptr;
	int		i;

	i = 1;
	if (stack->size < 0)
	{
		new_ptr = (long *)malloc(sizeof(long) * 1);
		stack->size = 1;
	}
	else
	{
		stack->size++;
		new_ptr = (long *)malloc(sizeof(long) * stack->size);
	}
	while (i < stack->size)
	{
		new_ptr[i] = stack->content[i - 1];
		i++;
	}
	free(stack->content);
	return (new_ptr);
}

void	push(t_list *stack_a, t_list *stack_b)
{
	long	push_to;
	long	*new_ptr_a;
	long	*new_ptr_b;

	if (stack_a->size >= 1)
	{
		push_to = stack_a->content[0];
		new_ptr_a = shift_a(stack_a);
		new_ptr_b = shift_b(stack_b);
		new_ptr_b[0] = push_to;
		stack_a->content = new_ptr_a;
		stack_b->content = new_ptr_b;
	}
}
