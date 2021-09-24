# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 19:41:49 by kbiczyk           #+#    #+#              #
#    Updated: 2021/09/24 15:29:30 by kamilbiczyk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./src/
OBJS_DIR = $(SRC_DIR)objs/

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror
RM = rm -f


SRC_NAME = 	ft_printf.c\
			ft_printf_strings.c\
			ft_printf_numbers.c

OBJS_NAME =	ft_printf.o\
			ft_printf_strings.o\
			ft_printf_numbers.o

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_NAME))

${NAME}:${OBJS}
	@ar rc ${NAME} ${OBJS}
	@echo "\n$(NAME) is ready"
	@echo ""
	@echo " _____   _____   _____  _   _  _______  ______   _  __ ____  _____  _____  ________     __ _  __"
	@echo "|  __ \ |  __ \ |_   _|| \ | ||__   __||  ____| | |/ /|  _ \|_   _|/ ____||___  /\ \   / /| |/ /"
	@echo "| |__) || |__) |  | |  |  \| |   | |   | |__    | ' / | |_) | | | | |        / /  \ \_/ / | ' / "
	@echo "|  ___/ |  _  /   | |  | . \` |   | |   |  __|   |  <  |  _ <  | | | |       / /    \   /  |  <  "
	@echo "| |     | | \ \  _| |_ | |\  |   | |   | |      | . \ | |_) |_| |_| |____  / /__    | |   | . \ "
	@echo "|_|     |_|  \_\|_____||_| \_|   |_|   |_|      |_|\_\|____/|_____|\_____|/_____|   |_|   |_|\_\ "
	@echo "\n"

${OBJS_DIR}%.o:${SRC_DIR}%.c
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: \"$<\""
	@clang -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\nCleaning...\n"

fclean:		clean
	@rm -f $(NAME)

re:			fclean all                                                                                       
                                                                                                