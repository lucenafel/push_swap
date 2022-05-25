/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:59:37 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/23 16:21:31 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *stack)
{
	int	tmp;

	if (stack->size >= 2)
	{
		tmp = stack->content[0];
		stack->content[0] = stack->content[1];
		stack->content[1] = tmp;
	}
}

void	exec_swap(t_list *stack, char s_name)
{
	char	out[2];

	out[0] = 's';
	out[1] = s_name;
	swap(stack);
	ft_putendl_fd(out, 1);
}
