#this is a comment line

#syntax is 
#target: dependencies /pre-requisites
#<tab>	command to execute from dependencies to target

myout: program2Main.o myLib.a
	gcc -o myout program2Main.o myLib.a

myLib.a: programTwo.o programthree.o programfour.o
	ar -q myLib.a programTwo.o programthree.o programfour.o

program2Main.o: program2Main.c
	gcc -I. -c program2Main.c

programfour.o: programfour.c
	gcc -I. -c programfour.c

programthree.o: programthree.c
	gcc -I. -c programthree.c

programTwo.o: programTwo.c
	gcc -I. -c programTwo.c

clean:
	rm *.o myout


