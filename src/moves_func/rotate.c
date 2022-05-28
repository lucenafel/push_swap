/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:26:53 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/26 23:18:07 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list *stack)
{
	int		i;
	long	first;

	if (stack->size > 1)
	{
		i = 0;
		first = stack->content[0];
		while (i < stack->size - 1)
		{
			stack->content[i] = stack->content[i + 1];
			i++;
		}
		stack->content[i] = first;
	}
}

void	exec_rotate(t_list *stack, char s_name)
{
	char	out[2];

	out[0] = 'r';
	out[1] = s_name;
	rotate(stack);
	ft_putendl_fd(out, 1);
}
