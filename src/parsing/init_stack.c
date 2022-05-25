/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:19:04 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 15:41:10 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *stack)
{
	stack->stack_a.size = -1;
	stack->stack_b.size = -1;
	/* stack->stack_a.content = 0; */
	/* stack->stack_b.content = 0; */
}
