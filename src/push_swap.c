/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/17 00:41:24 by lfelipe-         ###   ########.fr       */
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

// void	order_three(t_list **head)
// {
// 	long	first;
// 	long	second;
// 	long	third;

// 	first = (*head)->content;
// 	second = (*head)->next->content;
// 	third = (*head)->next->next->content;
// 	printf("%ld\n", first);
// 	printf("%ld\n", second);
// 	printf("%ld\n", third);
// 	// if (!check_reverse_order(*head))
// 	// {
// 	// 	ra(head);
// 	// 	sa(head);
// 	// }
// 	// if ()
// }

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

t_list	*get_mediam(t_list *head) // get better name
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
		mediam = (size / 2) + 1;
	while (i < mediam)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

void	sort_stack(t_list **head)
{
	t_list	*stack_b;

	stack_b = 0;
	if ()
}


int	main(int argc, char *argv[])
{
	t_list	*stack;

	stack = 0;
	if (argc > 1)
		stack = init_list(argc, argv);
	lst_clear(&stack);
}
