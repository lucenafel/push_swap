/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:48:43 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/21 17:40:37 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_list(char *str)
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

int	check_arg(char **list)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (list[i] && !res)
	{
		res = check_list(list[i]);
		i++;
	}
	return (res);
}
