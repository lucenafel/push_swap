/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:47:02 by lfelipe-          #+#    #+#             */
/*   Updated: 2021/12/17 13:10:37 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_dup(int *list, int count)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (i < count && !res)
	{
		j = i + 1;
		while (j < count && !res)
		{
			if (list[i] == list[j]) 
				res++;
			j++;
		}
		i++;
	}
	return (res);
}
