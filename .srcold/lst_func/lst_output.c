/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:21:59 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/21 16:23:49 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	lst_output(t_list *head)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = head;
	while (tmp)
	{
		printf("content of %d node -> %ld\n", i , tmp->content);
		tmp = tmp->next;
		i++;
	}
}
