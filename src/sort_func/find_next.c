/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:58:54 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 17:59:22 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_smaller(t_list *stack)
{
	int		i;
	long	smaller;

	smaller = stack->content[0];
	i = 1;
	while (i < stack->size)
	{
		if (stack->content[i] < smaller)
			smaller = stack->content[i];
		i++;
	}
	return (smaller);
}

int	find_index(t_list *stack)
{
	int		i;
	long	smaller;

	smaller = find_smaller(stack);
	i = 0;
	while (stack->content[i] != smaller)
		i++;
	return (i);
}
