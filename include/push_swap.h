/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:32:21 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/07/22 13:28:40 by lfelipe-         ###   ########.fr       */
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

void	output_stack(t_list *stack); // remove

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
void	q_sort(long *arr, int start, int end);

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

void	exec_swap(t_list *stack, char s_name);
void	exec_push(t_list *src, t_list *dest, char s_name);
void	exec_rotate(t_list *stack, char s_name);
void	exec_rr(t_stack *stack);
void	exec_rev_rotate(t_list *stack, char s_name);

/* sorting */

int		get_pivot_index(t_list *stack, long pivot);
long	get_pivot(t_list *stack);
int		find_index(t_list *stack);
void	find_next(t_stack *stack);
void	sort_two(t_list *stack, char s_name);
void	r_sort_two(t_list *stack, char s_name);
void	sort_three(t_list *stack, char s_name);
void	r_sort_three(t_list *stack, char s_name);
void	sort_four(t_stack *stack);
void	sort_five(t_stack *stack);

#endif
