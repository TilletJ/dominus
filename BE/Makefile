default: all

serveur.o: switchOnOff.h
    
all: serveur.o client.o switchOnOff.o
	gcc -o client client.o
	gcc -o serveur serveur.o switchOnOff.o

switchOnOff.o: switchOnOff.c switchOnOff.h
	gcc -c switchOnOff.c

client.o: client.c
	gcc -c client.c

serveur.o: serveur.c
	gcc -c serveur.c

clean:
	rm *.o 
