CC := gcc
CFLAGS := -Wall -Werror -std=c17

SRC := $(wildcard *.c)
OBJS := $(patsubst %.c, %.o, $(SRC))
EXES := $(basename $(OBJS))

DEBUG := 0

.PHONY: all clean

all: $(EXES)

$(EXES): %: %.c
ifeq ($(DEBUG), 1)
	$(CC) $(CFLAGS) -O2 -o $@ $<
else
	$(CC) $(CFLAGS) -g $@ $<
endif

clean:
	rm -f $(OBJS) $(EXES)

