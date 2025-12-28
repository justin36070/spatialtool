CC=gcc
CFLAGS=-Iinclude -Wall -Wextra -std=c17
LDFLAGS=-lm
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)

spatialtool: $(OBJ)
	$(CC) $(CFLAGS) -o spatialtool $(OBJ) $(LDFLAGS)

clean:
	rm -f src/*.o spatialtool
