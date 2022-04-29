/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:55:58 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/29 18:07:52 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	swap(t_list *stack, char flag)
{
	int	temp;

	if (stack->size >= 2)
	{
		temp = stack->content[0];
		stack->content[0] = stack->content[1];
		stack->content[1] = temp;
		write(1, "s", 1);
		write(1, &flag, 1);
		write(1, "\n", 1);
	}
}

int main(int argc, char *argv[])
{
	t_stack	stack;
	init_stack(&stack);
	exec_parsing(argc, argv, &stack);
	int i;
	i = 0;
	printf("%d\n", stack.stack_a.size);
	while (i < stack.stack_a.size)
		printf("%ld\n", stack.stack_a.content[i++]);
	/* i = 0; */
	/* while (i < stack.stack_a.size) */
	/* 	printf("%ld\n", stack.stack_a.content[i++]); */
	free(stack.stack_a.content);
	return (0);
}
