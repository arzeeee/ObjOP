CC=g++
INCLUDE_DIR=include
SOURCE_DIR=src
CFLAGS=-I$(INCLUDE_DIR) -Wall -g -lm -std=c++11 
SOURCE=bin/AnimAbs.o \
	bin/cell.o \
	bin/render.o \
	bin/zoo.o 

TEST=maincell mainzoo test try

all: build

bin/%.o: src/%.cpp include/*.h
	$(CC) $(CFLAGS) -c -o $@ $<

testbin/%.o: tests/%.cpp include/*.h
	mkdir -p testbin
	$(CC) $(CFLAGS) -c -o $@ $<

build: $(SOURCE) bin/main.o
	$(CC) -o bin/VirtualZoo $^ $(CFLAGS)

build_test: $(SOURCE)
	mkdir -p testbin
	$(foreach fn,$(TEST), $(CC) -o testbin/$(fn).o -c tests/$(fn).cpp $(CFLAGS);)
	$(foreach fn,$(TEST), $(CC) $^ testbin/$(fn).o -o testbin/$(fn) $(CFLAGS);)

