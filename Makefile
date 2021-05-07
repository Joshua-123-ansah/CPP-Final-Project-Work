CXX = g++
CFLAGS = -std=c++17 
LDFLAGS = -lm

ALL= main

output: main.o cuboidblocks.o cylindricalblocks.o majorFunction.o majorFunction2.o rectblocks.o sqrbaserectblocks.o sphericalblocks.o
		${CXX} ${CFLAGS}  main.o cuboidblocks.o cylindricalblocks.o majorFunction.o majorFunction2.o rectblocks.o sqrbaserectblocks.o sphericalblocks.o -o output

main.o: main.cpp Blocks.h
	${CXX} ${CFLAGS} -c main.cpp -I.

cuboidblocks.o: cuboidblocks.cpp Blocks.h
	${CXX} ${CFLAGS} -c cuboidblocks.cpp -I.

cylindricalblocks.o: cylindricalblocks.cpp Blocks.h
	${CXX} ${CFLAGS} -c cylindricalblocks.cpp -I.

majorFunction.o: majorFunction.cpp Blocks.h
	${CXX} ${CFLAGS} -c majorFunction.cpp -I.

majorFunction2.o: majorFunction2.cpp Blocks.h
	${CXX} ${CFLAGS} -c majorFunction2.cpp -I.

rectblocks.o: rectblocks.cpp Blocks.h
	${CXX} ${CFLAGS} -c rectblocks.cpp -I.

sqrbaserectblocks.o: sqrbaserectblocks.cpp Blocks.h
	${CXX} ${CFLAGS} -c sqrbaserectblocks.cpp -I.

sphericalblocks.o: sphericalblocks.cpp Blocks.h
	${CXX} ${CFLAGS} -c sphericalblocks.cpp -I.

clean :
	${RM} -r *.o main


