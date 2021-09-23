# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 19:41:49 by kbiczyk           #+#    #+#              #
#    Updated: 2021/09/23 20:13:21 by kbiczyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Src dir
SRC_DIR = src/
# Objs dir
OBJS_DIR = objs/

# All files
SRC =	ft_printf.c \
		ft_printf_strings.c \
		ft_printf_numbers.c

# All files with .o
SRC_OBJS = ${SRC:.c=.o}
SRC_OBJS_PREFIXED = $(addprefix $(SRC_DIR), $(SRC_OBJS))

# Name of the exec file
NAME = ft_printf.a

# Flags compile
FLAGS = -Wall -Wextra -Werror

# Delete
RM = rm -f

# $(OBJS_DIR)%.o:	%.c src/ft_printf.h
# 				@mkdir -p $(OBJS_DIR)
# 				@echo "Compiling: $<"
# 				@clang $(CC_FLAGS) -c $< -o $@

$(NAME):	$(SRC_OBJS_PREFIXED)
			@ar r $(NAME)$(SRC_OBJS_PREFIXED)
			@echo "Libft Done !"

all: $(NAME)

bonus: $(SRCB)

clean:
			rm -rf $(OBJS_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

bonus:		$(OBJECTS_BONUS_PREFIXED)
			@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
			@echo "Libft Bonus Done !"