# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g -Iinclude  -pedantic 


# Target executable
TARGET = output

SRC = src/main.c

OBJ = $(SRC:.c=.o)

# Default target to build the executable
all: $(TARGET)

# Rule to build the executable from object files
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) -lm

# Rule to build object files from source files
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
		rm -f $(TARGET) $(OBJ)