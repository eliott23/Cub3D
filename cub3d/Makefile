# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zait-che <zait-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 08:48:12 by zait-che          #+#    #+#              #
#    Updated: 2023/02/23 13:50:58 by zait-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cub3d
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
MFLAGS	= -lmlx -framework OpenGL -framework AppKit
RM		= rm -rf
MSRC	= 	Parsing/ft_split.c Parsing/h_err.c\
			Parsing/helper2.c Parsing/main.c Parsing/map.c\
			Parsing/pars_map.c Parsing/utils.c\
			Parsing/parsing_tools.c Parsing/tools.c Parsing/tools2.c\
			3D/env_render.c 3D/main.c 3D/utils.c 3D/hooks.c 3D/render_helpers.c 3D/utils2.c 
			
MOBJ		= $(MSRC:.c=.o)
all:		$(NAME)

$(NAME): $(MOBJ)
	$(CC) $(MOBJ) $(MFLAGS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

clean:
	$(RM) $(MOBJ)

fclean:		clean
			$(RM) $(NAME)

re:	fclean all