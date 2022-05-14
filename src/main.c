/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:55:58 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/10 17:14:32 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // remove

int main(int argc, char *argv[])
{
	t_stack	stack;

	init_stack(&stack);
	exec_parsing(argc, argv, &stack);
	/* int i; */
	/* i = 0; */
	/* printf("%d\n", stack.stack_a.size); */
	/* while (i < stack.stack_a.size) */
	/* 	printf("%ld\n", stack.stack_a.content[i++]); */
	/* i = 0; */
	/* while (i < stack.stack_a.size) */
	/* 	printf("%ld\n", stack.stack_a.content[i++]); */
	/* ptr_count(&stack.stack_a); */
	push(&stack.stack_a, &stack.stack_b);
	printf("%ld\n", stack.stack_b.content[0]);
	free(stack.stack_a.content);
	return (0);
}
