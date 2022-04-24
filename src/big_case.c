/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:30:08 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/21 16:36:19 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* limit the acess to the list for each recursive call made */

void	big_order_b(t_list **head_a, t_list **head_b);
void	find_next_a(t_list **stack, t_list *median);
void	find_next_b(t_list **stack, t_list *median);

void	big_order_a(t_list **head_a, t_list **head_b)
{
	t_list	*pivot;
	t_list	*copy;

	if (!*head_a)
		return ;
	if (lst_size(*head_a) == 3)
	{
		base_order_three_a(head_a);
		return ;
	}	
	copy = lst_dup(*head_a);
	q_sort(copy, lst_last(copy));
	pivot = get_median(copy);
	int size = lst_size(*head_a);
	int i = 0;
	while (i < size)
	{
		find_next_a(head_a, pivot);
		if ((*head_a)->content <= pivot->content)
			pb(head_a, head_b);
		i++;
	}
	lst_clear(&copy);
	#include <stdio.h>
	i = 1;
	while ((*head_a)->next)
		printf("content of %d -> %ld\n", i++, (*head_a)->content);
	/* big_order_b(head_a, head_b); */
	/* big_order_a(head_a, head_b); */
}

void	big_order_b(t_list **head_a, t_list **head_b)
{
	t_list	*pivot;
	t_list	*copy;

	if (!*head_b)
		return ;
	if (lst_size(*head_b) == 3)
	{
		base_order_three_b(head_b);
		return ;
	}
	copy = lst_dup(*head_b);
	q_sort(copy, lst_last(copy));
	pivot = get_median(copy);
	while ((*head_b)->content <= pivot->content)
	{
		find_next_b(head_b, pivot);
		pa(head_a, head_b);
	}
	lst_clear(&copy);
	big_order_a(head_a, head_b);
	big_order_b(head_a, head_b);
}

int	find_node_a(t_list *head, t_list *median)
{
	int	i;

	i = 0;
	if (head)
	{
		while (head->content > median->content)
		{
			head = head->next;
			i++;
		}
	}
	return (i);
}

int	find_node_b(t_list *head, t_list *median)
{
	int	i;

	i = 0;
	if (head)
	{
		while (head->content < median->content)
		{
			head = head->next;
			i++;
		}
	}
	return (i);
}

void	find_next_a(t_list **stack, t_list *median)
{
	int		i;
	int		stack_size;
	t_list	*copy;

	if (!*stack)
		return ;
	lst_output(*stack);
	i = 0;
	copy = lst_dup(*stack);
	stack_size = lst_size(*stack) / 2;
	if (stack_size % 2 != 0)
		stack_size += 1;
	i = find_node_a(copy, median);
	lst_clear(&copy);
	while ((*stack)->content > median->content)
	{
		if (i <= stack_size)
			ra(stack);
		else
			rra(stack);
	}
}

void	find_next_b(t_list **stack, t_list *median)
{
	int		i;
	int		stack_size;
	t_list	*copy;

	if (!*stack)
		return ;
	i = 1;
	copy = lst_dup(*stack);
	stack_size = lst_size(*stack) / 2;
	if (stack_size % 2 != 0)
		stack_size += 1;
	i = find_node_b(copy, median);
	lst_clear(&copy);
	while ((*stack)->content < median->content)
	{
		if (i <= stack_size)
			rb(stack);
		else
			rra(stack);
	}
}