VPATH= ../ ./
CC=gcc
OBJ=debug.o run.o
OUT=a.out

CFLAGS=${CFLAG}
CFLAGS+=-g -Wall 
all: ${OBJ}
	@echo ${VAR}
	${CC} ${CFLAGS} ${OBJ} -o ${OUT}


clean:
	rm *.out *.o
