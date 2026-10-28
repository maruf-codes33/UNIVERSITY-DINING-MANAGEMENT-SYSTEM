all: dining

dining: main.c functions.c dining.h
	gcc main.c functions.c -o dining

clean:
	rm -f dining dining.exe