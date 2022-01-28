/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/27 20:39:11 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // remove

void	output_list(t_list *head)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = head;
	while (tmp)
	{
		printf("content of %d node -> %ld\n", i, tmp->content);
		tmp = tmp->next;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stack;
	
	stack = 0;
	if (argc > 1)
	{
		stack = init_list(argc, argv);
		// output_list(stack);
	}
	output_list(stack);
	lst_clear(&stack);
	// if (argc > 100)
	// {
	// 	printf("skladf%s", argv[1]);

	// }
	// printf("%d\n", check_main("1ae"));
	// printf("%d\n", check_main("2"));
}
