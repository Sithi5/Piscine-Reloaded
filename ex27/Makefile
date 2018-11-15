# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabouce <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:11:45 by mabouce           #+#    #+#              #
#    Updated: 2018/11/06 16:25:42 by mabouce          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
O =	main.o
SRCS = main.c

all: $(NAME)

$(NAME): 
	gcc $(FLAG) -c $(SRCS)
	gcc $(FLAG) -o $(NAME) $(O)
clean:
	/bin/rm -f $(O)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
