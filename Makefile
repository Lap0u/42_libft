# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeaurai </var/mail/cbeaurai>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 17:09:39 by cbeaurai          #+#    #+#              #
#    Updated: 2020/11/19 19:18:30 by cbeaurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

CC = clang

CFLAGS = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME): lib
	$(CC) -o $(CFLAGS) $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

lib:
	gcc -c *.c 
		ar rc $(NAME) *.o 
		ranlib $(NAME)

bonus :
