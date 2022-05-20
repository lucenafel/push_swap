/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:24:18 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/20 18:36:07 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	lst_size(char **str_list)
{
	int	i;

	i = 0;
	while (str_list[i])
		i++;
	return (i);
}

void	lst_init(char **str_list, t_stack *stack)
{
	int		i;
	int		size;

	i = 0;
	stack->stack_a.size = lst_size(str_list);
	size = stack->stack_a.size;
	stack->stack_a.content = (long *)malloc(sizeof(long *) * size);
	while (i < size)
	{
		stack->stack_a.content[i] = ft_atol(str_list[i]);
		i++;
	}
}
