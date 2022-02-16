/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:12:25 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/15 21:13:48 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_dup(t_list *head)
{
	t_list	*copy;
	t_list	*tmp;

	if (head)
	{
		copy = 0;
		tmp = head;
		while (tmp)
		{
			lst_addback(&copy, lst_new(tmp->content));
			tmp = tmp->next;
		}
	}
	return (copy);
}
