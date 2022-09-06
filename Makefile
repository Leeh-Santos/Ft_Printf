# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: learodri <learodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 12:58:56 by lcouto            #+#    #+#              #
#    Updated: 2022/04/22 16:07:14 by learodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

DIR_SRC = printf

DIR_OBJS = leandrOfiles

HEADER = headers

INCLUDES = -I $(HEADER) -I $(LIBFT)

SOURCES = ft_printf.c ft_printf_others.c ft_print_unsigned.c ft_print_ptr.c ft_print_hex.c

SRC = $(addprefix $(DIR_SRC)/,$(SOURCES))

OBJS = $(addprefix $(DIR_OBJS)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "********************* uhuuu finally did it **************************"

$(DIR_OBJS)/%.o: $(DIR_SRC)/%.c
	@mkdir -p leandrOfiles
	@gcc -Wall -Wextra -Werror -g $(INCLUDES) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -rf $(DIR_OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

bonus: fclean all

.PHONY: all clean fclean re bonus

