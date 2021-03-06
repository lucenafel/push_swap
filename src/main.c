/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:55:58 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/07/19 10:35:16 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // remove

void	output_stack(t_list *stack) // remove
{
	int i;

	i = 0;
	while (i < stack->size)
	{
		printf("%ld\n", stack->content[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	t_stack	stack;

	if (argc > 1)
	{
		init_stack(&stack);
		exec_parsing(argc, argv, &stack);
		free(stack.stack_a.content);
		free(stack.stack_b.content);
	}
	return (0);
}
