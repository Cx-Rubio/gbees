# REF- 
# -pedantic -Wall
# std=c99 compatibility
# -D_GNU_SOURCE for qsort_r (GNU extensions)
# mkdir result folders
# -fPIC position independent code

CC=gcc

CFLAGS=-pedantic -Wall -std=c99 -D_GNU_SOURCE -fPIC

# remove -g for release version, and add -DRELEASE
LDFLAGS=-DRELEASE
LDLIBS=-lm

SRCS = $(wildcard *.c) $(wildcard ../../*.c)
OBJS = $(SRCS:%.c=%.o)

TARGET = CR3BP

.DEFAULT: all

all: link folders

folders:
	mkdir -p results/P0

link: ${OBJS}
	${CC} ${LDFLAGS} -o ${TARGET} ${OBJS} ${LDLIBS}

%.c.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	find ../.. -type f -name '*.o' -delete
	rm -f ${TARGET}