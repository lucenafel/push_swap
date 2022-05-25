/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:04:27 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/24 16:25:46 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list *stack, char s_name)
{
	if (stack->content[0] > stack->content[1])
		exec_swap(stack, s_name);
}

void	r_sort_two(t_list *stack, char s_name)
{
	if (stack->content[0] < stack->content[1])
		exec_swap(stack, s_name);
}
