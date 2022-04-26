/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:47:02 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/26 16:50:36 by lsmachine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_stack *lst)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (i < lst->size && !res)
	{
		j = i + 1;
		while (j < lst->size && !res)
		{
			if (lst->content[i] == lst->content[j])
				res++;
			j++;
		}
		i++;
	}
	return (res);
}
