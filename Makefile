# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 19:41:49 by kbiczyk           #+#    #+#              #
#    Updated: 2021/09/23 23:48:48 by kamilbiczyk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./src/
OBJS_DIR = $(SRC_DIR)objs/

NAME = ft_printf.a

FLAGS = -Wall -Wextra -Werror
RM = rm -f


SRC_NAME = 	ft_printf.c\
			ft_printf_strings.c\
			ft_printf_numbers.c

OBJ_NAME = ${SRC_NAME:.c=.o}

SRC = $(addprefix $(SRC_DIR), $(OBJ_NAME))

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c

$(NAME): $(SRC)
	@echo $(OBJS_DIR)
	@mkdir -p $(SRC_DIR)$(OBJS_DIR)
	@echo "Printf Done !"

all: $(NAME)

bonus: $(SRCB)

clean:
			rm -rf $(OBJS_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all