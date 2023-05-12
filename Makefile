CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCE_FILES = main.c

new: $(SOURCE_FILES)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f new