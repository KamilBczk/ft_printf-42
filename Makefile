# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 19:41:49 by kbiczyk           #+#    #+#              #
#    Updated: 2021/09/24 21:24:00 by kamilbiczyk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./src/
OBJS_DIR = $(SRC_DIR)objs/

# Colors
RED=\033[1;31m
GREEN=\033[1;32m
CURRENT=\033[1;36m
NC=\033[0m

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror
RM = rm -f


SRC_NAME = 	ft_printf.c\
			ft_printf_strings.c\
			ft_printf_numbers.c\
			ft_printf_hexa.c

OBJS_NAME =	ft_printf.o\
			ft_printf_strings.o\
			ft_printf_numbers.o\
			ft_printf_hexa.o

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_NAME))

${NAME}:${OBJS}
	@ar rc ${NAME} ${OBJS}
#	@gcc -o ${NAME} ${OBJS}
	@echo "\n${GREEN}$(NAME) is ready${NC}"
	@echo "${CURRENT}"
	@echo "██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗   ██╗  ██╗██████╗ ██╗ ██████╗███████╗██╗   ██╗██╗  ██╗"
	@echo "██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝   ██║ ██╔╝██╔══██╗██║██╔════╝╚══███╔╝╚██╗ ██╔╝██║ ██╔╝"
	@echo "██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗     █████╔╝ ██████╔╝██║██║       ███╔╝  ╚████╔╝ █████╔╝ "
	@echo "██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝     ██╔═██╗ ██╔══██╗██║██║      ███╔╝    ╚██╔╝  ██╔═██╗ "
	@echo "██║     ██║  ██║██║██║ ╚████║   ██║   ██║        ██║  ██╗██████╔╝██║╚██████╗███████╗   ██║   ██║  ██╗"
	@echo "╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝        ╚═╝  ╚═╝╚═════╝ ╚═╝ ╚═════╝╚══════╝   ╚═╝   ╚═╝  ╚═╝"
	@echo "${NC}"

${OBJS_DIR}%.o:${SRC_DIR}%.c
	@mkdir -p $(OBJS_DIR)
	@echo "${CURRENT}Compiling: \"$<\"${NC}"
	@clang -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED}Cleaning...${NC}\n"

fclean:		clean
	@rm -f $(NAME)

re:			fclean all                                                                                       
                                                                                                