CC = gcc
FILES = main.c frame.c colors.c options.c adobe_dancing.c
all:
	$(CC) $(FILES) -lncurses -o adobe_dancing
