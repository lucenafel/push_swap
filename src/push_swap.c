/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/15 21:57:32 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // remove

void	output_list(t_list *head)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = head;
	while (tmp)
	{
		printf("content of %d node -> %ld\n", i, tmp->content);
		tmp = tmp->next;
		i++;
	}
}

// void	order_three(t_list **head)
// {
// 	long	first;
// 	long	second;
// 	long	third;

// 	first = (*head)->content;
// 	second = (*head)->next->content;
// 	third = (*head)->next->next->content;
// 	printf("%ld\n", first);
// 	printf("%ld\n", second);
// 	printf("%ld\n", third);
// 	// if (!check_reverse_order(*head))
// 	// {
// 	// 	ra(head);
// 	// 	sa(head);
// 	// }
// 	// if ()
// }

t_list	*get_mediam(t_list *head) // get better name
{
	t_list	*tmp;
	int		mediam;
	int		size;
	int		i;

	i = 1;
	tmp = head;
	size = lst_size(head);
	if (size % 2 == 0)
		mediam = size / 2;
	else
		mediam = (size / 2) + 1;
	while (i < mediam)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}


int	main(int argc, char *argv[])
{
	t_list	*stack;
	t_list	*s_case1 = 0;
	t_list	*s_case2 = 0;
	t_list	*s_case3 = 0;
	t_list	*s_case4 = 0;
	t_list	*s_case5 = 0;
	int case1[3] = {3, 2, 1};
	int case2[3] = {1, 3, 2};
	int case3[3] = {2, 3, 1};
	int case4[3] = {2, 1, 3};
	int case5[3] = {3, 1, 2};

	for (int i = 0; i < 3; i++)
	{
		lst_addback(&s_case1, lst_new(case1[i]));
		lst_addback(&s_case2, lst_new(case2[i]));
		lst_addback(&s_case3, lst_new(case3[i]));
		lst_addback(&s_case4, lst_new(case4[i]));
		lst_addback(&s_case5, lst_new(case5[i]));
	}
	
	stack = 0;
	if (argc > 1)
		stack = init_list(argc, argv);

	printf("Case 1\n");
	printf("before\n");
	output_list(s_case1);
	printf("after\n");
	base_order_three(s_case1);
	output_list(s_case1);
	printf("Case 2\n");
	printf("before\n");
	output_list(s_case2);
	printf("after\n");
	base_order_three(s_case2);
	output_list(s_case2);
	printf("Case 3\n");
	printf("before\n");
	output_list(s_case3);
	printf("after\n");
	base_order_three(s_case3);
	output_list(s_case3);
	printf("Case 4\n");
	printf("before\n");
	output_list(s_case4);
	printf("after\n");
	base_order_three(s_case4);
	output_list(s_case4);
	printf("Case 5\n");
	printf("before\n");
	output_list(s_case5);
	printf("after\n");
	base_order_three(s_case5);
	output_list(s_case5);





	lst_clear(&stack);
	lst_clear(&s_case1);
	lst_clear(&s_case2);
	lst_clear(&s_case3);
	lst_clear(&s_case4);
	lst_clear(&s_case5);
}
