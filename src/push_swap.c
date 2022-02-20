/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/20 17:29:19 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // remove

void	output_list(t_list *head) // remove
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

t_list	*lst_pop_first(t_list **head)
{
	t_list	*poped;
	t_list	*new_head;

	poped = *head;
	new_head = (*head)->next;
	new_head->prev = 0;
	(*head)->next = new_head->next;
	(*head) = new_head;
	poped->next = 0;
	return (poped);
}

t_list	*get_median(t_list *head) // get better name
{
	t_list	*tmp;
	int		mediam;
	int		size;
	int		i;

	i = 1;
	tmp = head;
	size = lst_size(head);
	if (size % 2 == 0)
		mediam = size / 2;
	else
		mediam = (size + 1) / 2;
	while (i < mediam)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

int	main(int argc, char *argv[])
{
	t_list	*stack;

	stack = 0;
	if (argc > 1)
		stack = init_list(argc, argv);
	// printf("Before\n");
	// output_list(stack);
	order_five(&stack);
	// printf("After\n");
	// output_list(stack);
	lst_clear(&stack);
}
