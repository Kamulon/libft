# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 06:32:36 by cperegri          #+#    #+#              #
#    Updated: 2021/10/26 17:57:09 by cperegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
LIBFT	=	libft.h
FLAGS	=	-Wall -Wextra -Werror

SRCS	=	ft_isalpha.c	ft_toupper.c	\
			ft_isdigit.c	ft_tolower.c	\
			ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c					\
			ft_strchr.c		ft_strrchr.c	\
			ft_strlen.c		ft_strncmp.c	\
			ft_strnstr.c	ft_strlcpy.c	\
			ft_strlcat.c					\
			ft_memset.c		ft_bzero.c		\
			ft_memchr.c		ft_memcpy.c		\
			ft_memmove.c	ft_memcmp.c		\
			ft_atoi.c						\
			ft_calloc.c		ft_strdup.c		\
			ft_substr.c		ft_strjoin.c	\
			ft_strtrim.c	ft_split.c		\
			ft_itoa.c		ft_strmapi.c	\
			ft_striteri.c					\
			ft_putchar_fd.c	ft_putstr_fd.c	\
			ft_putendl_fd.c	ft_putnbr_fd.c	\

SRCSBS	=	ft_lstnew.c		ft_lstadd_front.c	\
			ft_lstsize.c	ft_lstlast.c		\
			ft_lstdelone.c	ft_lstadd_back.c	\
			ft_lstclear.c	ft_lstiter.c		\
			ft_lstmap.c

OBJS	=	$(SRCS:.c=.o)
OBJSBS	=	$(SRCSBS:.c=.o)
CC		=	gcc

all		:	
			@make $(NAME)

$(NAME)	:	$(OBJS) $(LIBFT)
			ar rcs $(NAME) $(OBJS)

bonus	:	
			@make OBJS="$(OBJSBS) $(OBJS)" $(NAME)

%.o		: 	%.c
			$(CC) $(FLAGS) -c $< -o $@

clean	:
			/bin/rm -f $(OBJS) $(OBJSBS)

fclean	:	clean
			/bin/rm -f $(NAME)

re		:	fclean all

.PHONY	: 	all clean fclean re	bonus