/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:05:20 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/10 18:12:46 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list *stack_a, t_list * stack_b)
{
	long	push_to;
	long	*new_ptr_a;
	long	*new_ptr_b;
	int		i;

	if (stack_a->size >= 1)
	{
		push_to = stack_a->content[0];
		new_ptr_a = (long *)malloc(sizeof(long) * stack_a->size - 1);
		i = 0;
		while (i < stack_a->size - 1)
		{
			new_ptr_a[i] = stack_a->content[i + 1];
			i++;
		}
		free(stack_a->content);
		if (stack_b->size < 0)
		{
			new_ptr_b = (long *)malloc(sizeof(long) * 1);
			stack_b->size = 1;
		}
		else
			new_ptr_b = (long *)malloc(sizeof(long) * stack_b->size + 1);
		i = 0;
		new_ptr_b[0] = push_to;
		while (i < stack_b->size)
		{
			new_ptr_b[i + 1] = stack_b->content[i];
			i++;
		}
		free(stack_b->content);
		stack_a->content = new_ptr_a;
		stack_b->content = new_ptr_b;
	}

}
