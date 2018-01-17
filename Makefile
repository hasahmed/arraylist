CC = gcc
CFLAGS = -c -g
LDFLAGS = ''
EXE = test

OBJS = arraylist.o main.o


all : $(OBJS)
	$(CC) -o $(EXE) $(LDFLAGS) $(OBJS)

objs : $(OBJS)


clean :
	rm -f *.o $(EXE)
