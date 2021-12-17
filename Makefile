# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 22:59:49 by lfelipe-          #+#    #+#              #
#    Updated: 2021/12/15 00:42:39 by lfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= main.c
		  $(AUD)

# AUX		=

SDIR	= ./src/

ODIR	= ./obj/

ADIR	= aux/

AUD		= $(addprefix $(ADIR), $(AUX))

OBJS	= $(addprefix $(ODIR), $(SRCS:.c=.o))

# MOBJ	= $(addprefix $(ODIR), $(MPIPE:.c=.o))

# BOBJ	= $(addprefix $(ODIR), $(BPIPE:.c=.o))

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

INCLUDE = -I ./include

RM		= rm -rf

$(ODIR)%.o:	$(SDIR)%.c
			@mkdir -p $(ODIR)
			@mkdir -p $(ODIR)/$(ADIR)
			@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(MOBJ)
			$(CC) $(INCLUDE) $(CFLAGS) $(MOBJ) $(OBJS) -o $(NAME)

$(BNAME):	$(OBJS) $(BOBJ)
			$(CC) $(INCLUDE) $(CFLAGS) $(BOBJ) $(OBJS) -o $(BNAME)

bonus:		$(BNAME)

clean:
			$(RM) $(OBJS) $(ODIR)

fclean:		clean
			$(RM) $(NAME) $(BNAME) $(OBJS) $(ODIR)

re:			fclean all

.PHONY= all clean fclean re
