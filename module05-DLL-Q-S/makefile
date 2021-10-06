all:	DLLTests LaundrySim

DLLTests:	DLLTests.cpp
	g++ -std=c++11 -Wall -I ../doctest -DDOCTEST_CONFIG_IMPLEMENT_WITH_MAIN DLLTests.cpp -o DLLTests

LaundrySim:	LaundrySim.o Laundry.o
	g++ -std=c++11 -Wall -I ../doctest -DDOCTEST_CONFIG_DISABLE LaundrySim.o Laundry.o -o LaundrySim

Laundry.o:	Laundry.cpp
	g++ -std=c++11 -Wall -c -I ../doctest -DDOCTEST_CONFIG_DISABLE Laundry.cpp -o Laundry.o

LaundrySim.o:	LaundrySim.cpp
	g++ -std=c++11 -Wall -c -I ../doctest -DDOCTEST_CONFIG_DISABLE LaundrySim.cpp -o LaundrySim.o

clean:
	rm DLLTests LaundrySim *.o
