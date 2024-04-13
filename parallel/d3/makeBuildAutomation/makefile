#this is a comment line

#syntax is 
#target: dependencies /pre-requisites
#<tab>	command to execute from dependencies to target

myout: program2Main.o programTwo.o 
	gcc -o myout program2Main.o programTwo.o 

program2Main.o: program2Main.c
	gcc -I. -c program2Main.c

programTwo.o: programTwo.c
	gcc -I. -c programTwo.c

clean:
	rm *.o myout

