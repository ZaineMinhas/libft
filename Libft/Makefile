# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 18:35:49 by zminhas           #+#    #+#              #
#    Updated: 2020/11/23 14:41:51 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLACK		= $(shell tput -Txterm setaf 0)
RED			= $(shell tput -Txterm setaf 1)
GREEN		= $(shell tput -Txterm setaf 2)
YELLOW		= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
PURPLE		= $(shell tput -Txterm setaf 5)
BLUE		= $(shell tput -Txterm setaf 6)
WHITE		= $(shell tput -Txterm setaf 7)
RED_NRV		= $(shell tput -Txterm setaf 9)
PINK		= $(shell tput -Txterm setaf 13)
RESET		= $(shell tput -Txterm sgr0)

SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

.c.o:
			@gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}
			@echo "${PURPLE}Bien jeej de :$<${RESET}"

${NAME}:	${OBJS}
			@ar -rcs $@ $^
			@echo "${GREEN}JeeJ fait !${RESET}"

all:		${NAME}

clean:
			@rm -f ${OBJS}
			@echo "${YELLOW}jeej cleaner !${RESET}"

fclean:
			@rm -f ${OBJS}
			@rm -f ${NAME}
			@echo "${RED}jeej full fcleaner !${RESET}"

re:			fclean all

.PHONY:		all clean fclean re
