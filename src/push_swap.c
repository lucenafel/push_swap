/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/26 22:48:24 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // remove

int		check_int_limit(t_list *lst)
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

void	ft_quit(char **split, t_list **list)
{
	lst_clear(list);
	ft_free(split);
	printf("Error\n");
	exit(-1);
}

t_list	*start_list(char **list)
{
	int		i;
	t_list	*head;

	i = 0;
	head = 0;
	while (list[i])
	{
		lst_addback(&head, lst_new(ft_atol(list[i])));
		i++;
	}
	return (head);
}

t_list	*init_list(int argc, char **argv)
{
	int		res;
	char	**split;
	t_list	*list;

	res = 0;
	split = 0;
	list = 0;
	if (argc == 2)
	{
		split = space_check(argv[1]);
		if (split)
		{
			res += check_list(split);
			list = start_list(split);
			res += check_dup(list);
			res += check_int_limit(list);
		}
		printf("control result -> %d\n", res);
		if (res)
			ft_quit(split, &list);
		ft_free(split);
	}
	else
	{
		argv++;
		res += check_list(argv);
		list = start_list(argv);
		res += check_dup(list);
		res += check_int_limit(list);
		printf("res -> %d\n", res);
		if (res)
			ft_quit(0, &list);
	}
	return (list);
}

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

int	check_main(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && !res)
	{
		if (!ft_isdigit(str[i]))
		{
			res = 1;
		}
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	t_list	*stack;
	
	if (argc > 1)
	{
		stack = 0;
		stack = init_list(argc, argv);
		// output_list(stack);
		lst_clear(&stack);
	}
	// if (argc > 100)
	// {
	// 	printf("skladf%s", argv[1]);

	// }
	// printf("%d\n", check_main("1ae"));
	// printf("%d\n", check_main("2"));


}
