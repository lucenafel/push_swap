/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:55:58 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 19:31:09 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // remove

void	output_stack(t_list *stack) // remove
{
	int i;

	i = 0;
	while (i < stack->size) {
		printf("%ld ", stack->content[i++]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	t_stack	stack;

	init_stack(&stack);
	exec_parsing(argc, argv, &stack);
	output_stack(&stack.stack_a);
	sort_five(&stack);
	output_stack(&stack.stack_a);
	free(stack.stack_a.content);
	return (0);
}