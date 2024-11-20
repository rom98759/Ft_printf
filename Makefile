CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_itoa.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_int.c \
		ft_print_pointer.c \
		ft_print_str.c \
		ft_print_unsigned.c \
		ft_printf.c \
		ft_miscellaneous.c

OBJ = $(SRC:.c=.o)

# Barre de progression
BAR_LENGTH := 50
TOTAL_FILES := $(words $(SRC))
COMPILED_FILES = 0

%.o : %.c
	$(eval COMPILED_FILES=$(shell echo $$(($(COMPILED_FILES) + 1))))
	$(eval PROGRESS_PERCENT=$(shell echo $$(($(COMPILED_FILES) * 100 / $(TOTAL_FILES)))))
	$(eval FILLED_BAR_LENGTH=$(shell echo $$(($(PROGRESS_PERCENT) * $(BAR_LENGTH) / 100))))
	@printf "\rCompiling [\033[0;32m"
	@for i in $(shell seq 1 $(FILLED_BAR_LENGTH)); do printf "#"; done
	@for i in $(shell seq 1 $(shell echo $$(($(BAR_LENGTH) - $(FILLED_BAR_LENGTH))))); do printf " "; done
	@printf "\033[0m] $(PROGRESS_PERCENT)%%"
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $@ $^

clean :
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
