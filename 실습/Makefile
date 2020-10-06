CC=g++
target=result
objects=main.o Array.o RangeArray.o

$(target): $(objects)
	$(CC) -o $(target) $(objects)

$(objects) : Array.h RangeArray.h

.PHONY : clean
clean :
	rm $(target) $(objects)
