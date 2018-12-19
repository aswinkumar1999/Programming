CC = g++
PYLIBPATH = $(shell python3.6-config --exec-prefix)/lib
LIB = -L$(PYLIBPATH) $(shell python3.6-config --libs) -lboost_python
OPTS = $(shell python3.6-config --include) -O2

default: zoo.so
	@python ./visit_zoo.py

zoo.so: zoo.o
	$(CC) $(LIB) -Wl,-rpath,$(PYLIBPATH) -shared $< -o $@

zoo.o: zoo.cpp Makefile
	$(CC) $(OPTS) -c $< -o $@

clean:
	rm -rf *.so *.o

.PHONY: default clean
