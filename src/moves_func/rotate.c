/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:26:53 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/20 16:02:00 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list *stack)
{
	int		i;
	long	first;

	if (stack->size > 1)
	{
		i = 0;
		first = stack->content[0];
		while (i < stack->size)
		{
			stack->content[i] = stack->content[i + 1];
			i++;
		}
		stack->content[i - 1] = first;
	}
}
