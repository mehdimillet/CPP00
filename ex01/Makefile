NAME = phonebook

SOURCE = Contact.cpp \
			PhoneBook.cpp\
			main.cpp

OBJS_DIR = objs
OBJECTS = $(addprefix $(OBJS_DIR)/, $(SOURCE:.cpp=.o))
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

GREEN = \033[1;32m
RED = \033[1;31m
RESET = \033[0m

all: $(NAME)
$(NAME): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
	@printf "$(GREEN)✔ Compilation terminée$(RESET)\n"

clean:
	@$(RM) $(OBJS_DIR)
	@printf "$(RED)✖ Fichiers objets supprimés.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED)✖ Fichiers objets supprimés.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re