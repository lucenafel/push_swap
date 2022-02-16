/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 00:43:36 by lfelipe-          #+#    #+#             */
/*   Updated: 2022/02/16 02:01:01 by lfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	long			content;
}	t_list;

# define INT_MAX 2147483647
# define INT_MIN -2147483648

/* list functions */

void	lst_addback(t_list **head, t_list *new_node);
void	lst_addfront(t_list **head, t_list *new_node);
void	lst_clear(t_list **head);
t_list	*lst_dup(t_list *head);
t_list	*lst_last(t_list *head);
t_list	*lst_new(long content);
int		lst_size(t_list *head);

/* moves functions */

void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **head_a, t_list **head_b);
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);
void	ra(t_list **head);
void	rb(t_list **head);
void	rr(t_list **head_a, t_list **head_b);
void	rra(t_list **head);
void	rrb(t_list **head);
void	rrr(t_list **head_a, t_list **head_b);

/* aux func */

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_free(char **str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
long	ft_atol(const char *str);
int		ft_isdigit(int c);
int		ft_isspace(int c);

/* push swap func */

t_list	*init_list(int argc, char **argv);
char	**space_check(char *argv);
int		check_list(char **list);
int		check_dup(t_list *head);
int		check_int_limit(t_list *lst);
void	q_sort(t_list *first, t_list *last);
int		check_crescent_order(t_list *head);
int		check_reverse_order(t_list *head);

/* base cases func */
void	base_order_a(t_list **head);
void	base_order_b(t_list **head);

#endif
