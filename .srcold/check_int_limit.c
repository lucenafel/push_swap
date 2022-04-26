/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_limit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:20:46 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/27 20:22:15 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int_limit(t_list *lst)
{
	t_list	*tmp;
	int		res;

	tmp = lst;
	res = 0;
	while (tmp->next && !res)
	{
		if (tmp->content < INT_MIN || tmp->content > INT_MAX)
			res++;
		tmp = tmp->next;
	}
	return (res);
}
