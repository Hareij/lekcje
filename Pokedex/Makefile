all: run

build: main.cpp
	gcc -std=c++17 -o program main.cpp pokemon.cpp -lstdc++

run: build
	./program

clean:
	rm -f program