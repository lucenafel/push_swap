/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:33:15 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/26 21:54:06 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dup_check(t_list *lst)
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
