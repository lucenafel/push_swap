/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:05:20 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/25 17:30:08 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*shift_a(t_list *stack)
{
	long	*new_ptr;
	int		i;

	i = 0;
	if (stack->size == 1)
	{
		stack->size--;
		new_ptr = NULL;
	}
	else if (stack->size > 1)
	{
		stack->size--;
		new_ptr = (long *)malloc(sizeof(long) * stack->size);
	}
	while (i < stack->size)
	{
		new_ptr[i] = stack->content[i + 1];
		i++;
	}
	if (stack->content)
	{
		free(stack->content);
		stack->content = NULL;
	}
	return (new_ptr);
}

static long	*shift_b(t_list *stack)
{
	long	*new_ptr;
	int		i;

	i = 1;
	if (stack->size <= 0)
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
	if (stack->content)
	{
		free(stack->content);
		stack->content = NULL;
	}
	return (new_ptr);
}

static void	push(t_list *stack_a, t_list *stack_b)
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

void	exec_push(t_list *src, t_list *dest, char s_name)
{
	char	out[2];

	out[0] = 'p';
	out[1] = s_name;
	push(src, dest);
	ft_putendl_fd(out, 1);
}
