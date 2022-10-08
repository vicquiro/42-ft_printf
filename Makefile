# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 18:57:20 by vquiroga          #+#    #+#              #
#    Updated: 2022/10/08 20:31:02 by vquiroga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar 
ARFLAGS = -rcs
NAME = libftprintf.a
RM = rm -rf
HDRS = includes/libft_printf.h


################################################################################
##								MANDATORY									  ##
################################################################################
CFILES = \
		srcs/ft_print_dec.c \
		srcs/ft_print_hexa.c \
		srcs/ft_print_pointer.c \
		srcs/ft_print_unsig.c \
		srcs/ft_printf_misc.c \
		srcs/ft_printf.c
#- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
OBJS = $(CFILES:.c=.o)
################################################################################
.PHONY: all re fclean clean
################################################################################

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(ARFLAGS) $@ $^
			
.c.o:
		 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HDRS}

re:     	fclean all

fclean:     clean
			@$(RM) $(NAME)

clean:		
			@$(RM) $(OBJS)

