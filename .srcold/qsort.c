/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:30:03 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/15 15:47:05 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*partition(t_list *first, t_list *last)
{
	t_list	*pivot;
	t_list	*front;
	int		tmp;

	pivot = first;
	front = first;
	tmp = 0;
	while (front && front != last)
	{
		if (front->content < last->content)
		{
			pivot = first;
			tmp = first->content;
			first->content = front->content;
			front->content = tmp;
			first = first->next;
		}
		front = front->next;
	}
	tmp = first->content;
	first->content = last->content;
	last->content = tmp;
	return (pivot);
}

void	q_sort(t_list *first, t_list *last)
{
	t_list	*pivot;

	if (first == last)
		return ;
	pivot = partition(first, last);
	if (pivot && pivot->next)
		q_sort(pivot->next, last);
	if (pivot && first != pivot)
		q_sort(first, pivot);
}
