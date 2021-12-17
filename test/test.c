#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// typedef struct s_list
// {
// 	struct s_list	*next;
// 	struct s_list	*prev;
// 	int				content;
// }	t_list;


// t_list	*new_node(int content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (0);
// 	new->content = content;
// 	new->next = 0;
// 	new->prev = 0;
// 	return (new);
// }

// t_list	*lstlast(t_list *lst)
// {
// 	if (!lst)
// 		return (0);
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }

// void	lstadd_back(t_list **head, t_list **tail, t_list *new_node)
// {
// 	t_list	*tmp;

// 	if (!*head)
// 	{
// 		*head = new_node;
// 		*tail = new_node;
// 	}
// 	else
// 	{
// 		tmp = lstlast(*head);
// 		tmp->next = new_node;
// 		new_node->prev = tmp;
// 		*tail = new_node;
// 	}

// }

// void	output_list_rev(t_list *head)
// {
// 	t_list *tmp;

// 	tmp = lstlast(head);
// 	while (tmp != NULL)
// 	{
// 		printf("content of node -> %d\n", tmp->content);
// 		tmp = tmp->prev;	
// 	}
// }

// void	output_list(t_list *head)
// {
// 	t_list	*tmp;
// 	int		i;

// 	i = 1;
// 	tmp = head;
// 	while (tmp != NULL)
// 	{
// 		printf("content of %d node -> %d\n", i, tmp->content);
// 		tmp = tmp->next;
// 		i++;
// 	}
// }

// void	clear_list(t_list **head)
// {
// 	t_list	*tmp;
// 	t_list	*next;

// 	tmp = *head;
// 	while (tmp != NULL)
// 	{
// 		next = tmp->next;
// 		free(tmp);
// 		tmp = next;
// 	}
// 	*head = NULL;
// }

// int	ft_lstsize(t_list *lst)
// {
// 	int	i;

// 	i = 0;
// 	while (lst)
// 	{
// 		lst = lst->next;
// 		i++;
// 	}
// 	return (i);
// }

int		find_dup(int *list, int count)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	i = 0;
	while (i < count && !res)
	{
		j = i + 1;
		while (j < count && !res)
		{
			if (list[i] == list[j]) 
				res++;
			j++;
		}
		i++;
	}
	return (res);
}

char	**split_args(char *argv)
{
	char	**ret;

	ret = ft_split(argv, ' ');
	return (ret);
}


int	main(int argc, char *argv[])
{
	int	*list;
	int	i;
	int	res;

	res = check_arg(argv);
	if (res > 0)
		printf("not valid");
	else
		printf("tudo certo");

}