CC = g++
#CCFLAGS = -O -Wall -Werror -ansi
#for int main
FILE = cw_assignment7
#for both .h and .cpp
CLASS1 = instructorFileProcessor

$(FILE) : $(FILE).o $(CLASS1).o
	$(CC) -o $(FILE).exe $(FILE).o $(CLASS1).o

$(FILE).o : $(FILE).cpp $(CLASS1).h
	$(CC) $(CCFLAGS) -c $(FILE).cpp

$(CLASS1).o : $(CLASS1).cpp $(CLASS1).h
	$(CC) $(CCFLAGS) -c $(CLASS1).cpp

clean :
	rm -f *.o $(FILE).exe
