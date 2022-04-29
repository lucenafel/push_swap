/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_limit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:29:01 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/26 19:30:01 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int_limit(t_list *lst)
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
