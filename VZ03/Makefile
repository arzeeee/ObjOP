CC=g++
INCLUDE_DIR=include
SOURCE_DIR=src
CFLAGS=-I$(INCLUDE_DIR) -Wall -g -lm -std=c++11 
SOURCE= bin/driver.o \
	bin/cage.o \
	bin/cages.o \
	bin/player.o \
	bin/animal.o \
	bin/cell.o \
	bin/render.o \
	bin/zoo.o 

TEST=maincell mainzoo test try

all: main

bin/%.o: src/%.cpp include/*.h
	$(CC) $(CFLAGS) -c -o $@ $<

testbin/%.o: tests/%.cpp include/*.h
	mkdir -p testbin
	$(CC) $(CFLAGS) -c -o $@ $<

main: $(SOURCE) bin/main.o
	$(CC) -o bin/main $^ $(CFLAGS)

build_test: $(SOURCE)
	mkdir -p testbin
	$(foreach fn,$(TEST), $(CC) -o testbin/$(fn).o -c tests/$(fn).cpp $(CFLAGS);)
	$(foreach fn,$(TEST), $(CC) $^ testbin/$(fn).o -o testbin/$(fn) $(CFLAGS);)

