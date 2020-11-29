# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 18:35:49 by zminhas           #+#    #+#              #
#    Updated: 2020/11/29 16:59:18 by zminhas          ###   ########.fr        #
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
RESET		= $(shell tput -Txterm sgr0)

SRCS	=	$(shell ls srcs | grep -E ".+\.c")

SRCS_BONUS	=	$(shell ls srcs_bonus | grep -E ".+\.c")

OBJS	=	$(addprefix srcs/, ${SRCS:.c=.o})

OBJS_BONUS	=	$(addprefix srcs_bonus/, ${SRCS_BONUS:.c=.o})

NAME	=	libft.a

.c.o:
			@gcc -Wall -Wextra -Werror -c -I./ $< -o ${<:.c=.o}
			@echo "${LIGHTPURPLE}Bien jeej de :$<${RESET}"

$(NAME):	${OBJS}
			@ar -rcs ${NAME} ${OBJS}
			@clear
			@echo "${GREEN}JeeJ fait !${RESET}"

all:		${NAME}

clean:
			@rm -f ${OBJS}
			@clear
			@echo "${BLUE}jeej cleaner !${RESET}"

fclean:
			@rm -f ${OBJS}
			@rm -f ${NAME}
			@rm -f ${OBJS_BONUS}
			@clear
			@echo "${RED}jeej full fcleaner !${RESET}"

bonus:		${OBJS_BONUS}
			@ar -rcs ${NAME} ${OBJS_BONUS}
			@clear
			@echo "${PURPLE}jeej bonusser !${RESET}"

full:		all bonus
			@clear
			@echo "${BLUE}jeej fuller !${RESET}"

re:			fclean all

.PHONY:		all clean fclean re bonus full
