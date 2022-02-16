/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:56:10 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/15 21:01:14 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* both functions return 1 if the list is out of respective order */
int	check_crescent_order(t_list *head)
{
	t_list	*i;
	t_list	*j;
	int		res;

	i = head;
	res = 0;
	while (i->next && !res)
	{
		j = i->next;
		if (i->content > j->content)
			res++;
		i = i->next;
	}
	return (res);
}

int	check_reverse_order(t_list *head)
{
	t_list	*i;
	t_list	*j;
	int		res;

	i = head;
	res = 0;
	while (i->next && !res)
	{
		j = i->next;
		if (i->content < j->content)
			res++;
		i = i->next;
	}
	return (res);
}
