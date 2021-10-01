# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 14:59:23 by msierra-          #+#    #+#              #
#    Updated: 2021/09/22 16:39:21 by msierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS	=	ft_memset.c		\
		  		ft_memmove.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_memcpy.c		\
		  		ft_bzero.c		\
		  		ft_atoi.c		\
		  		ft_strlen.c		\
		  		ft_strlcpy.c	\
		  		ft_strlcat.c	\
		 		ft_strrchr.c	\
		 	 	ft_strchr.c		\
		  		ft_strnstr.c	\
				ft_strncmp.c	\
		  		ft_atoi.c		\
		  		ft_isalnum.c	\
		  		ft_isdigit.c	\
		  		ft_isalpha.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_tolower.c	\
		  		ft_toupper.c	\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				ft_strjoin.c	\
				ft_split.c		\
				ft_strtrim.c	\
				ft_itoa.c		\
				ft_strmapi.c	\
				ft_strtrim.c	\
				ft_striteri.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_substr.c		\

SRCS_BON	=	ft_lstnew_bonus.c		\
		  		ft_lstadd_front_bonus.c	\
 		  		ft_lstsize_bonus.c		\
		  		ft_lstlast_bonus.c		\
 				ft_lstadd_back_bonus.c	\
 				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
 				ft_lstmap_bonus.c		\

OBJS		= ${SRCS:.c=.o}
OBJS_BON    = ${SRCS_BON:.c=.o}

CC		= gcc

RM		= rm -rf

AR		= ar rcs

CFLAGS = -Wall -Werror -Wextra

all	:		$(NAME)

$(NAME)	:	$(OBJS) 
			$(AR) $(NAME) $(OBJS)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

bonus:		$(OBJS_BON)
			$(AR) $(NAME) $(OBJS_BON)

clean:	
			$(RM) ${OBJS} $(OBJS_BON)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
