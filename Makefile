# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfelipe- <lfelipe-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 14:38:58 by lfelipe-          #+#    #+#              #
#    Updated: 2022/01/12 14:39:39 by lfelipe-         ###   ########.fr        #
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
