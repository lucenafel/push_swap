/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:48:43 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/27 13:35:57 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_arg(char *str)
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

int	check_list(char **list)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (list[i] && !res)
	{
		res = check_arg(list[i]);
		i++;
	}
	return (res);
}
