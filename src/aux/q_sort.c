/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   q_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:26:05 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 19:26:50 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap(long *a, long *b)
{
	long	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(long *arr, int start, int end)
{
	int	pivot;
	int	left;
	int	right;

	left = start;
	right = end;
	pivot = arr[start];
	while (left < right)
	{
		while (left <= end && arr[left] <= pivot)
			left++;
		while (right >= 0 && arr[right] > pivot)
			right--;
		if (left < right)
			swap(&arr[left], &arr[right]);
	}
	arr[start] = arr[right];
	arr[right] = pivot;
	return (right);
}

void	q_sort(long *arr, int start, int end)
{
	int	pivot_pos;

	if (end > start)
	{
		pivot_pos = partition(arr, start, end);
		q_sort(arr, start, pivot_pos - 1);
		q_sort(arr, pivot_pos + 1, end);
	}
}
