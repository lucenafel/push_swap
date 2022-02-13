/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/12 23:31:01 by lfelipe-         ###   ########.fr       */
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

int		check_order(t_list *head) // return 1 if list is out of order
{
	t_list	*i;
	t_list	*j;
	int		res;

	i = head;
	res = 0;
	while (i->next && !res)
	{
		j = i->next;
		if (i->content > j->content)
			res++;
		i = i->next;
	}
	return (res);
}

int		check_reverse_order(t_list *head) // return 1 if list is out of reverse order
{
	t_list	*i;
	t_list	*j;
	int		res;

	i = head;
	res = 0;
	while (i->next && !res)
	{
		j = i->next;
		if (i->content < j->content)
			res++;
		i = i->next;
	}
	return (res);
}

void	order_three(t_list **head)
{
	if (!check_reverse_order(*head))
	{
		ra(head);
		sa(head);
	}
	// if ()
}

t_list	*lst_dup(t_list *head)
{
	t_list	*copy;
	t_list	*tmp;

	if (head)
	{
		copy = 0;
		tmp = head;
		while (tmp)
		{
			lst_addback(&copy, lst_new(tmp->content));
			tmp = tmp->next;
		}
	}
	return (copy);
}

long	get_mediam(t_list *head, int lst_size) // get better name
{
	t_list	*tmp;
	int		mediam;
	int		i;

	i = 1;
	tmp = head;
	if (lst_size % 2 == 0)
		mediam = lst_size / 2;
	else
		mediam = (lst_size / 2) + 1;
	printf("mediam calc result -> %d\n", mediam);
	while (i < mediam)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->content);
}


int	main(int argc, char *argv[])
{
	t_list	*stack;
	t_list	*copy;
	
	stack = 0;
	if (argc > 1)
		stack = init_list(argc, argv);
	output_list(stack);
	printf("Copy \n");
	copy = lst_dup(stack);
	q_sort(copy, lst_last(copy));
	output_list(copy);
	printf("mediam -> %ld\n", get_mediam(copy, lst_size(copy)));
	lst_clear(&stack);
	lst_clear(&copy);
}
