# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 14:38:58 by lfelipe-          #+#    #+#              #
#    Updated: 2022/01/18 16:42:20 by lfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= push_swap.c \
		  $(PAUXSRC) \
		  $(PLSTSRC) \
		  $(PMOVSRC)

AUXSRC	= ft_isdigit.c \
		  ft_putendl_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_substr.c 

LSTSRC	= lst_addback.c \
		  lst_addfront.c \
		  lst_clear.c \
		  lst_last.c \
		  lst_newnode.c

MOVSRC	= push.c \
		  reverse_rotate.c \
		  rotate.c \
		  swap.c

SDIR	= ./src/

ODIR	= ./obj/

AUXDIR	= aux_func/

LSTDIR	= lst_func/

MOVDIR	= moves_func/

PAUXSRC	= $(addprefix $(AUXDIR), $(AUXSRC))

PLSTSRC	= $(addprefix $(LSTDIR), $(LSTSRC))

PMOVSRC	= $(addprefix $(MOVDIR), $(MOVSRC))

OBJS	= $(addprefix $(ODIR), $(SRCS:.c=.o))

DIR		= $(AUXDIR) $(LSTDIR) $(MOVDIR)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

INCLUDE = -I ./include

RM		= rm -rf

$(ODIR)%.o:	$(SDIR)%.c
			@mkdir -p $(OBJDIR) $(addprefix $(ODIR)/, $(DIR))
			@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(INCLUDE) $(CFLAGS) $(MOBJ) $(OBJS) -o $(NAME)


bonus:		$(BNAME)

clean:
			$(RM) $(OBJS) $(ODIR)

fclean:		clean
			$(RM) $(NAME) $(OBJS) $(ODIR)

re:			fclean all

.PHONY= all bonus clean fclean re
