/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:12:44 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 18:49:36 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list *stack)
{
	int		i;
	long	last;

	if (stack->size > 1)
	{
		i = stack->size - 1;
		last = stack->content[stack->size - 1];
		while (i > 0)
		{
			stack->content[i] = stack->content[i - 1];
			i--;
		}
		stack->content[0] = last;
	}
}

void	exec_rev_rotate(t_list *stack, char s_name)
{
	char	out[3];

	out[0] = 'r';
	out[1] = 'r';
	out[2] = s_name;
	reverse_rotate(stack);
	ft_putendl_fd(out, 1);
}
