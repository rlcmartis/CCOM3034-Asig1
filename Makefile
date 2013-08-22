fracArray: fracArray.h fracArray.o fracArrayClient.o
	g++ -o fracArray fracArray.o fracArrayClient.o

fracArray.o: fracArray.cpp
	g++ -c fracArray.cpp

fracArrayClient.o: fracArrayClient.cpp
	g++ -c fracArrayClient.cpp

clean: 
	rm *.o
