/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:28:28 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/04/25 14:28:30 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**space_check(char *argv)
{
	int		i;
	int		res;
	char	**split;

	i = 0;
	res = 0;
	split = 0;
	while (argv[i] && !res)
	{
		res = ft_isspace(argv[i]);
		i++;
	}
	if (res)
		split = ft_split(argv, ' ');
	return (split);
}
