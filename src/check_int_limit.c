/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_limit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:20:46 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/26 16:43:07 by lsmachine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int_limit(t_stack *lst)
{
	int	res;
	int	iter;

	res = 0;
	iter = 0;
	while (iter < lst->size)
	{
		if (lst->content[iter] < INT_MIN || lst->content[iter] > INT_MAX)
			res++;
		iter++;
	}
	return (res);
}
