# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tda-silv <tda-silv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 16:59:26 by tda-silv          #+#    #+#              #
#    Updated: 2023/01/05 13:22:03 by tda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR		= source/
OBJ_DIR		= object/
INC_DIR		= include/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

# **************************************************************************** #
# -I | Chemin du dossier où trouver un .h									   #
# -L | Chemin du dossier où trouver un .a									   #
# -l | Nom du .a sans le préfixe "lib"										   #
# **************************************************************************** #

I_HEADERS	= -I $(INC_DIR)

################################################################################

HEADERS		= ./include/libft.h													\
			  ./include/my.h 													\

NAME_FILE = ft_isalpha															\
			ft_isdigit															\
			ft_isalnum															\
			ft_isascii															\
			ft_isprint															\
			ft_strlen															\
			ft_memset															\
			ft_bzero															\
			ft_memcpy															\
			ft_memmove															\
			ft_strlcpy															\
			ft_strlcat															\
			ft_toupper															\
			ft_tolower															\
			ft_strchr															\
			ft_strrchr															\
			ft_strncmp															\
			ft_memchr															\
			ft_memcmp															\
			ft_strnstr															\
			ft_atoi																\
			ft_calloc															\
			ft_strdup															\
			ft_substr															\
			ft_strjoin															\
			ft_strtrim															\
			ft_split															\
			ft_itoa																\
			ft_strmapi															\
			ft_striteri															\
			ft_putchar_fd														\
			ft_putstr_fd														\
			ft_putendl_fd														\
			ft_putnbr_fd														\
			get_next_line/get_next_line_bonus									\
			$(addprefix ./lst/,													\
			  				  ft_lstnew											\
							  ft_lstadd_front									\
							  ft_lstsize										\
							  ft_lstlast										\
							  ft_lstadd_back									\
							  ft_lstdelone										\
							  ft_lstclear										\
							  ft_lstiter										\
							  ft_lstmap											\
			)																	\
			$(addprefix ./my/,													\
			  				 my_strjoin_free									\
							 my_atoi_hex										\
							 my_strdjoin										\
							 my_strdlen											\
							 my_strdfree										\
			)																	\
			$(addprefix ./t_dl/,												\
			  				   dl_add_back										\
							   dl_clear_one										\
							   dl_clear											\
							   dl_find_content									\
							   dl_last											\
							   dl_new											\
							   dl_size											\
			)																	\
			$(addprefix ./t_li/,												\
							   li_add_back										\
							   li_clear_one										\
							   li_clear											\
							   li_find_content									\
							   li_last											\
							   li_new											\
							   li_size											\
			)																	\
			$(addprefix ./ft_printf/,											\
									ft_putchar									\
									ft_putchar_hexa								\
									ft_putchar_hexa_cap							\
									ft_putnbr_hexa								\
									ft_putnbr_hexa_cap							\
									ft_putnbr_int								\
									ft_putnbr_unsigned							\
									ft_putstr									\
									ft_putstr_printf							\
									ft_idconv_c									\
									ft_idconv_d_i								\
									ft_idconv_p									\
									ft_idconv_s									\
									ft_idconv_u									\
									ft_idconv_x									\
									ft_idconv_x_cap								\
									ft_convselect								\
									ft_convchr									\
									ft_datazero									\
									ft_printf									\
			)																	\

SRC			= $(addsuffix .c, $(addprefix $(SRC_DIR), $(NAME_FILE)))
OBJ			= $(addsuffix .o, $(addprefix $(OBJ_DIR), $(NAME_FILE)))

################################################################################

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(I_HEADERS) -c $< -o $@

all: $(NAME) $(HEADERS)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
