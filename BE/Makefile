default: all

serveur.o: switchOnOff.h
    
all: serveur.o client.o switchOnOff.o
	~/buildroot-2017.08/output/host/bin/arm-linux-gcc -o dominus_client client.o
	~/buildroot-2017.08/output/host/bin/arm-linux-gcc -o dominus_serveur serveur.o switchOnOff.o

switchOnOff.o: switchOnOff.c switchOnOff.h
	~/buildroot-2017.08/output/host/bin/arm-linux-gcc -c switchOnOff.c

client.o: client.c
	~/buildroot-2017.08/output/host/bin/arm-linux-gcc -c client.c

serveur.o: serveur.c
	~/buildroot-2017.08/output/host/bin/arm-linux-gcc -c serveur.c

clean:
	rm *.o 
