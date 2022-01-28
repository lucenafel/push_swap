/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:17:35 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/27 20:25:04 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quit(char **split, t_list **list)
{
	lst_clear(list);
	ft_free(split);
	ft_putendl_fd("Error", 1);
	exit(-1);
}

static t_list	*start_list(char **list)
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

static t_list	*split_arg(char **argv) // change function name
{
	char	**split;
	int		res;
	t_list	*list;

	res = 0;
	split = space_check(argv[1]);
	if (split)
	{
		res += check_list(split);
		list = start_list(split);
		res += check_dup(list);
		res += check_int_limit(list);
	}
	if (res)
		ft_quit(split, &list);
	ft_free(split);
	return (list);
}

static t_list	*func_else(char **argv) // change function name
{
	t_list	*list;
	int		res;

	res = 0;
	argv++;
	res += check_list(argv);
	list = start_list(argv);
	res += check_dup(list);
	res += check_int_limit(list);
	if (res)
		ft_quit(0, &list);
	return (list);
}

t_list	*init_list(int argc, char **argv)
{
	t_list	*list;

	list = 0;
	if (argc == 2)
		list = split_arg(argv);
	else
		list = func_else(argv);
	return (list);
}
