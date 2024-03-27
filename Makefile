# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 17:28:13 by mfaria-p          #+#    #+#              #
#    Updated: 2024/01/25 20:23:20 by mfaria-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/check/list_checker.c \
	srcs/error_handling/errors.c \
	srcs/operations/push.c \
	srcs/operations/reverse_rotate.c \
	srcs/operations/rotate_and_push.c \
	srcs/operations/rotate.c \
	srcs/operations/swap.c \
	srcs/sort/cost_a_to_b.c \
	srcs/sort/cost_b_to_a.c \
	srcs/sort/rotate_type.c \
	srcs/sort/sort.c \
	srcs/sort/sort2.c \
	srcs/sort/utils.c \
	srcs/sort/utils2.c \
	main.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT): 
	make -C $(LIBFT_PATH)

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all