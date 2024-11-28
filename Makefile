# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-f <jrocha-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 13:24:49 by jrocha-f          #+#    #+#              #
#    Updated: 2024/11/19 13:24:49 by jrocha-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = philo
SORCES = philo.c utils.c init_philo.c

OBJ = $(SORCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror #-pthread

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
