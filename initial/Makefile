main: MyClass.o ClassTwo.o StringFuckery.o
	g++ -o main main.cpp MyClass.o ClassTwo.o

MyClass.o: MyClass.cpp
	g++ -c MyClass.cpp

ClassTwo.o: ClassTwo.cpp
	g++ -c ClassTwo.cpp

.PHONY: clean

clean:
	rm *.o
