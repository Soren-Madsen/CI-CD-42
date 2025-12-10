CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge02

.PHONY: all test clean


all: $(TARGET)

$(TARGET): starter.c Operaciones.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c Operaciones.c

test: Operaciones.c test_challenge02.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) Operaciones.c test_challenge02.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
