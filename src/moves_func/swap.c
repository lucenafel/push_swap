/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:53:46 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/11 02:34:45 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*add protection for empty list and list with less than 2 elements */
void	swap(t_list **head, char *c)
{
	t_list	*second;
	t_list	*third;

	second = (*head)->next;
	third = second->next;
	(*head)->next = third;
	third->prev = (*head);
	second->prev = NULL;
	second->next = *head;
	*head = second;
}
