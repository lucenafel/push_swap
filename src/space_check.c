/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:02:54 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/26 20:21:27 by lfelipe-         ###   ########.fr       */
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
