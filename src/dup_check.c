/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:47:02 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/21 15:52:35 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_list *head)
{
	t_list	*i;
	t_list	*j;
	int		res;

	i = head;
	res = 0;
	while (i && !res)
	{
		j = i->next;
		while (j && !res)
		{
			if (i->content == j->content)
				res++;
			j = j->next;
		}
		i = i->next;
	}
	return (res);
}
