driver: main.out
	./main.out
	
main.out: main.cpp Stack.h ../Node/Node.h Collection.h
	g++ -omain.out main.cpp Stack.h ../Node/Node.h

clean:
	rm -rf main.out
