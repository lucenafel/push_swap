/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:41:31 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/20 18:30:13 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_issorted(long *arr, int arr_size)
{
	int	i;

	i = 1;
	if (arr_size == 0 || arr_size == 1)
		return (1);
	while (i < arr_size)
	{
		if (arr[i - 1] > arr[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_isrevsorted(long *arr, int arr_size)
{
	int	i;

	i = 1;
	if (arr_size == 0 || arr_size == 1)
		return (1);
	while (i < arr_size)
	{
		if (arr[i - 1] < arr[i])
			return (0);
		i++;
	}
	return (1);
}
