#Description
nopcov is a command line tool, to instrument source level, self deleting information for branch coverage analysis.

##Relevant publications

###Probe Removal
* 	2007, The Advantages of Post-Link Code Coverage
*	2004, Reducing Coverage Collection Overhead With Disposable Instrumentation

###Hardware Counters
* 	2012, THeME: a system for testing by hardware monitoring events

###General
* 	2002, Efficient Instrumentation for Code Coverage Testing 

###Parsing
* 	2002, Branch Coverage for Arbitrary Languages Made Easy

###Source code instrumentation
* 	2009, A Generic and Conﬁgurable Source-Code Instrumentation Component

###Other interesting applications
* 	2009, nAIT: A source analysis and instrumentation framework for nesC
* 	2006, High-fidelity C/C++ code transformation

##Notes on streamlining instrumentation
###Init
	gcc -c nopcov.c

###For every file
	cp bzip2.c bzip2.bak
	gcc -include nopcov.h -P -E -ansi -O0 bzip2.c > bzip2-preprocessed.c
	nopcov bzip2-preprocessed.c
	gcc -g -O0 -c -ansi bzip2-preprocessed-instrumented.c
	gcc -o bzip2-nopcov bzip2-preprocessed-instrumented.o nopcov.o
	mv bzip2-preprocessed-instrumented.c bzip2.c

###Fin
	rm \*.o \*-preprocessed.c \*-instrumented.c
	time ./bzip2-nopcov --keep --force 

###Testing with gcov
	gcc -fprofile-arcs -ftest-coverage -g bzip2.c -o bzip2-gcov
	time ./bzip2-gcov --keep --force 
	gcov -c bzip2.c

###Generating large text files
	cat - > file.txt #with 2 lines
	for i in {1..<n>}; do cat file.txt file.txt > file2.txt && mv file2.txt file.txt; done #for some n (25 about 400 mb)
