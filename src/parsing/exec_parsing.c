/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:51:03 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/29 17:52:46 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	exec_split(char *argv, t_stack *stack)
{
	char	**split;
	int		res;

	res = 0;
	split = space_check(argv);
	if (split)
	{
		res += check_list(split);
		lst_init(split, stack);
		res += dup_check(&stack->stack_a);
		res += check_int_limit(&stack->stack_a);
	}
	if (res)
		ft_quit(split, &stack->stack_a);
	ft_free(split);
}

static void	exec_checklist(char **argv, t_stack *stack)
{
	int		res;

	res = 0;
	argv++;
	res += check_list(argv);
	lst_init(argv, stack);
	res += dup_check(&stack->stack_a);
	res += check_int_limit(&stack->stack_a);
	if (res)
		ft_quit(0, &stack->stack_a);
}

void	exec_parsing(int argc, char **argv, t_stack *stack)
{
	if (argc == 2)
		exec_split(argv[1], stack);
	else if (argc > 2)
		exec_checklist(argv, stack);
}
