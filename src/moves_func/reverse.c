/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:12:44 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/20 16:02:12 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list *stack)
{
	int		i;
	long	last;

	if (stack->size > 1)
	{
		i = stack->size;
		last = stack->content[stack->size - 1];
		while (i > 0)
		{
			stack->content[i] = stack->content[i - 1];
			i--;
		}
		stack->content[0] = last;
	}
}
