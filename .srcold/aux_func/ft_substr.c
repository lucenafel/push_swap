/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:01:43 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/01/06 18:59:36 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	max_len;

	s_len = ft_strlen(s);
	if (start < s_len)
		max_len = s_len - start;
	else
		max_len = 0;
	if (max_len > len)
		max_len = len;
	ptr = (char *)malloc(max_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, max_len + 1);
	return (ptr);
}
