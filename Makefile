NAME = squarified-treemap

all: program run clean

program: $(NAME).c
	gcc -o $(NAME).exe $(NAME).c -lraylib -lgdi32 -lwinmm -std=c99 -g -mwindows

run:
	$(NAME).exe

clean:
	erase $(NAME).exe
