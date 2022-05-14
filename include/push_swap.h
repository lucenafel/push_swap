/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:32:21 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/05/10 17:26:06 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list {
	long	*content;
	int		size;
}	t_list;

typedef struct s_stack {
	t_list	stack_a;
	t_list	stack_b;
}	t_stack;

/* aux functions */
long	ft_atol(const char *str);
void	ft_free(char **str);
int		ft_isdigit(int c);
int		ft_isspace(int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* parsing */

int		check_int_limit(t_list *lst);
int		dup_check(t_list *lst);
void	lst_init(char **str_list, t_stack *stack);
char	**space_check(char *argv);
int		check_list(char **list);
void	ft_quit(char **split, t_list *lst);
void	exec_parsing(int argc, char **argv, t_stack *stack);
void	init_stack(t_stack *stack);

/* moves */

void	push(t_list *stack_a, t_list *stack_b);

#endif
