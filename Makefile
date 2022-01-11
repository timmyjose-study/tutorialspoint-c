CC := gcc
CFLAGS := -Wall -Werror -std=c17

SRC := $(filter-out foo.c, $(wildcard *.c))
SRC := $(filter-out bar.c, $(SRC))
EXES := $(basename $(SRC))

DEBUG := 0

.PHONY: all clean

all: $(EXES)

$(EXES): %: %.c
ifeq ($(DEBUG), 1)
	$(CC) $(CFLAGS) -g -o $@ $<
else
	$(CC) $(CFLAGS) -O2 -o $@ $<
endif

foobar: foo.o bar.o
ifeq ($(DEBUG), 1)
	$(CC) $(CFLAGS) -g -o $@ $^
else
	$(CC) $(CFLAGS) -O2 -o $@ $^
endif

foo.o: foo.c bar.o
	$(CC) $(CFLAGS) -c  $@ $< 

bar.o: bar.c
	$(CC) $(CFLAGS) -c $@ $< 

clean:
	rm -f $(OBJS) $(EXES)

