# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 10:16:56 by potero-d          #+#    #+#              #
#    Updated: 2022/01/18 12:14:28 by potero-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = utils/ft_strlen.c utils/ft_split.c utils/ft_substr.c utils/ft_strjoin.c\
	   utils/ft_strncmp.c utils/ft_putchar_fd.c utils/ft_putstr_fd.c\
	   src/ft_path.c src/main.c src/ft_addarg.c src/ft_pipex.c src/ft_error.c


OBJS = $(SRCS:.c=.o)

NAME = pipex

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INC			= ./inc

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INC)

RM = rm -f

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

sanitize: $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -fsanitize=address -g -O

all: $(NAME)

clean:
			$(RM) $(OBJS)

fclean: clean
			$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
		
