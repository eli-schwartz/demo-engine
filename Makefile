CXX=g++
CFLAGS=-std=c++20
DFLAGS = -pedantic -W -Wall -Wextra -Werror
FLAGS = $(CFLAGS) $(DFLAGS)
BIN = bin/main.o
OUTPUT = Engine

target: $(BIN)
	$(CXX) -o $(OUTPUT) $(BIN) $(FLAGS)

bin/%.o: src/%.cpp | bin
	$(CXX) -c -o $@ $< $(FLAGS)

bin:
	mkdir bin

clean:
	rm -rf bin $(OUTPUT)

run:
	make && ./$(OUTPUT)
