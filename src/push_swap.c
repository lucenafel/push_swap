/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:45 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/21 18:15:40 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // remove

void	ft_quit(char **split, t_list **list)
{
	lst_clear(list);
	ft_free(split);
	printf("Error\n");
	exit(-1);
}

long	ft_atol(const char *str)
{
	int		signal;
	long	result;

	result = 0;
	signal = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-')
	{
		signal = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * signal);
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
		// int i = 0;
		// while (split[i])
		// 	printf("%s\n", split[i++]);
		if (split)
		{
			res = check_arg(split);
			list = start_list(split);
			res = check_dup(list);
		}
		if (!split || res)
			ft_quit(split, &list);
		ft_free(split);
	}
	else
	{
		res = check_arg(argv);
		list = start_list(argv);
		res = check_dup(list);
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
		printf("content of %d node -> %d\n", i, tmp->content);
		tmp = tmp->next;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stack;
	
	stack = 0;
	stack = init_list(argc, argv);
	output_list(stack);
	lst_clear(&stack);

}
