all:	IteratorSLLTests BookSearch

BookSearch:	Book.o BookSearch.o
	g++ -std=c++11 -Wall -I ../doctest -DDOCTEST_CONFIG_DISABLE Book.o BookSearch.o -o BookSearch

Book.o:	Book.cpp
	g++ -std=c++11 -Wall -I ../doctest -DDOCTEST_CONFIG_DISABLE -c Book.cpp -o Book.o

BookSearch.o:	BookSearch.cpp
	g++ -std=c++11 -Wall -I ../doctest -DDOCTEST_CONFIG_DISABLE -c BookSearch.cpp -o BookSearch.o

IteratorSLLTests:	IteratorSLLTests.cpp
	g++ -std=c++11 -Wall -I ../doctest -DDOCTEST_CONFIG_IMPLEMENT_WITH_MAIN IteratorSLLTests.cpp -o IteratorSLLTests

clean:
	rm IteratorSLLTests BookSearch *.o
