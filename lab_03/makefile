CC := gcc
CFLAGS := -std=c99 -Wall -Werror -pedantic -Wvla
OUT := ./out/
SRC := ./src/
OBJ := $(OUT)input.o $(OUT)output.o $(OUT)operations.o $(OUT)addition.o $(OUT)random.o

run : CFLAGS += -DNDEBUG -g0
run : app.exe

debug : CFLAGS += -g3
debug : app.exe

app.exe : $(OBJ) $(OUT)main.o
	$(CC) -o app.exe $(OBJ) $(OUT)main.o

$(OUT)main.o : $(SRC)main.c $(SRC)common.h $(SRC)input.h $(SRC)output.h $(SRC)operations.h $(SRC)addition.h $(SRC)random.h
	cd out && $(CC) $(CFLAGS) -c .$(SRC)main.c

$(OUT)input.o : $(SRC)input.c $(SRC)input.h
	cd out && $(CC) $(CFLAGS) -c .$(SRC)input.c

$(OUT)output.o : $(SRC)output.c $(SRC)output.h
	cd out && $(CC) $(CFLAGS) -c .$(SRC)output.c

$(OUT)operations.o : $(SRC)operations.c $(SRC)operations.h
	cd out && $(CC) $(CFLAGS) -c .$(SRC)operations.c

$(OUT)addition.o : $(SRC)addition.c $(SRC)addition.h
	cd out && $(CC) $(CFLAGS) -c .$(SRC)addition.c

$(OUT)random.o : $(SRC)random.c $(SRC)random.h
	cd out && $(CC) $(CFLAGS) -c .$(SRC)random.c


.PHONY : clean debug release

clean :
	$(RM) $(OUT)*.o *.exe
