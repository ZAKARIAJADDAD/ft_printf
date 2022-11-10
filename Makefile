# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 01:15:37 by zjaddad           #+#    #+#              #
#    Updated: 2022/11/08 03:45:09 by zjaddad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc

CFLAGS= -Wextra -Werror -Wall

AR= ar -rc

SRCS= ft_printf.c\
		ft_hexdecimal.c\
			ft_putchar.c\
				ft_putnbr.c\
					ft_putstr.c\
						ft_unsnbr.c
NAME= libftprintf.a

OBJS= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)
	
fclean:
	rm -f $(NAME) $(OBJS)
	
re: fclean all