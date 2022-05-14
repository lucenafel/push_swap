# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfelipe- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 13:35:00 by lfelipe-          #+#    #+#              #
#    Updated: 2022/05/10 17:01:34 by lfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRCS		= main.c \
			  $(PAUX) \
			  $(PPAR) \
			  $(PMOV)


AUX			= ft_atol.c \
			  ft_free.c \
			  ft_isdigit.c \
			  ft_isspace.c \
			  ft_putendl_fd.c \
			  ft_putstr_fd.c \
			  ft_split.c \
			  ft_strlcpy.c \
			  ft_strlen.c \
			  ft_substr.c \

PARSING		= check_int_limit.c \
			  dup_check.c \
			  exec_parsing.c \
			  ft_quit.c \
			  init_stack.c \
			  lst_init.c \
			  space_check.c \
			  valid_test.c

MOVES		= push.c \

SDIR		= src/

ODIR		= obj/

ADIR		= aux/

PDIR		= parsing/

MDIR		= moves_func/

PAUX		= $(addprefix $(ADIR), $(AUX))

PPAR		= $(addprefix $(PDIR), $(PARSING))

PMOV		= $(addprefix $(MDIR), $(MOVES))

DIR			= $(ADIR) $(PDIR) $(MDIR)

OBJS		= $(addprefix $(ODIR), $(SRCS:.c=.o))

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

INCLUDE		= -I ./include

RM			= rm -rf

$(ODIR)%.o:	$(SDIR)%.c
			@mkdir -p $(addprefix $(ODIR), $(DIR))
			$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(INCLUDE) $(CFLAGS) $(MOBJ) $(OBJS) -o $(NAME)

bonus:		$(BNAME)

clean:		
			@$(RM) $(OBJS) $(ODIR)

fclean:		clean
			@$(RM) $(NAME) $(OBJS) $(ODIR)

re:			fclean all

.PHONY		= all bonus clean fclean re
