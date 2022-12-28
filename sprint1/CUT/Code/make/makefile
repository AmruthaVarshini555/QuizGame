INC = /home/system/QuizGame/inc
SRC = /home/system/QuizGame/src
OBJ = /home/system/QuizGame/obj

CFLAGS = -c -g -Wall
LFLAGS = -o
GCC = gcc
CVFLAGS = -Wall -c -g
IFLAGS = -I $(INC)

all : $(BIN)/client 

$(OBJ)/client.o : $(SRC)/main.c
	$(GCC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv *.o/home/system/QuizGame/obj

$(OBJ)/mainmenu.o : $(SRC)/menu.c
	$(GCC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv *.o/home/system/QuizGame/obj

$(OBJ)/admin.o : $(SRC)/admin.c
	$(GCC) $(CFLAGS) $(SRC)/admin.c $(IFLAGS)
	mv *.o/home/system/QuizGame/obj

$(OBJ)/coodinator.o : $(SRC)/Coordinator.c
	$(GCC) $(CFLAGS) $(SRC)/Coordinator.c ($IFLAGS)
	mv *.o/home/system/QuizGame/obj

$(OBJ)/contestant.o : $(SRC)/contestant.c
	$(GCC) $(CFLAGS) $(SRC)/contestant.c $(IFLAGS)
	mv *.o/home/system/QuizGame/obj

$(OBJ)/validations.o : $(SRC)/validations.c
	$(GCC) $(CFLAGS) $(SRC)/validations.c $(IFLAGS)
	mv *.o/home/system/QuizGame/obj


$(BIN)/client : $(OBJ)/client.o $(OBJ)/mainmenu.o $(OBJ)/admin.o $(OBJ)/coordinator.o $(OBJ)/contestant.o $(OBJ)/validations.o
	$(GCC) $(OBJ)/client.o $(OBJ)/mainmenu.o $(OBJ)/admin.o $(OBJ)/coordinator.o $(OBJ)/contestant.o $(OBJ)/validations.o $(LFLAGS) $(BIN)/client

clean:
	rm -f $(OBJ)/*.o $(BIN)/client
