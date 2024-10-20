NAME		=	cub3D

SRCS		=	src/main.c \
				src/init.c \
				src/parsing/check_info.c \
				src/parsing/check_map.c \
				src/parsing/parse.c \
				src/raycasting/move.c \
				src/raycasting/raycast.c \
				src/raycasting/render.c \
				src/utils/color.c \
				src/utils/errors.c \
				src/utils/hooks.c \
				src/utils/utils_mlx.c \
				src/utils/utils.c

HEADER		=	cub.h

OBJS		=	$(SRCS:.c=.o)

LIBFT		=	libft.a
LIBFTDIR	=	./libft/

MLX			=	libmlx.a
MLXDIR		=	./mlx/

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I .
MLXFLAGS	=	-Llibft -Lmlx -lmlx -lz -framework OpenGL -framework Appkit

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	make -C ./libft/
	make -C $(MLXDIR)
	$(CC) $(CFLAGS) $(LIBFTDIR)$(LIBFT) $(OBJS) $(MLXFLAGS) -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -Imlx -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C $(MLXDIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(MLX)

re: fclean all

madina:
	make
	./cub3D maps/madina.cub

ayeshamk:
	make
	./cub3D maps/ayeshamk.cub


.PHONY: all clean fclean re debug
