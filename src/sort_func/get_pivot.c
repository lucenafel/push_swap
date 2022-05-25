/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:09:19 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/25 17:32:36 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*copy_arr(long *arr, int arr_size)
{
	long	*copy;
	int		i;

	i = 0;
	copy = (long *)malloc(sizeof(long) * arr_size);
	while (i < arr_size)
	{
		copy[i] = arr[i];
		i++;
	}
	return (copy);
}

long	get_pivot(t_list *stack)
{
	long	pivot;
	long	*copy;
	int		index;

	copy = copy_arr(stack->content, stack->size);
	q_sort(copy, 0, stack->size - 1);
	index = stack->size / 2 - 1;
	if (stack->size % 2)
		index = stack->size / 2;
	pivot = copy[index];
	free(copy);
	return (pivot);
}

int	get_pivot_index(t_list *stack, long pivot)
{
	int	index;

	index = 0;
	while (stack->content[index] != pivot)
		index++;
	return (index);
}
