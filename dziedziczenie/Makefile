SRC_DIR = .
FILES = $(shell find $(SRC_DIR) -name "*.cpp")

all: run

build: $(FILES)
	gcc -std=c++20 -o program $(FILES) -lstdc++ -I$(SRC_DIR)

run: build
	./program

clean:
	rm -f program