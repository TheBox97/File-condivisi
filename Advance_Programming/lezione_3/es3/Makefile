#Questo è un makefile, per usarlo digitare a terminale make -f nome_di_questo_file ( di defoult deve essere chiamato Makefile)
#make eseguira il Makefile presente nella current directory se non specificato diversamente dal paramtro -f 
#---------------------------------------------------------------------------------
#Questo è il compilatore utilizzato  
CC=g++
#Questa è la directory degli header 
INCDIR=../header 
#Questo è l'elenco dei parametri passati al compilatore 
CFLAGS= -c -I$(INCDIR)
#Questa è la directory dei file object 
OBJCDIR=../object_file
#Questa è la variabile contenente tutti gli object files compreso il main object file 
OBJECTS= main.o $(OBJCDIR)/libreria.o 

#Qua inserisco la seguente sintassi: 
#------------------------------------------------
#taget: dependency 
#	comandi eseguiti (ATTENZIONE AL TAB )
#------------------------------------------------

#si noti che il primo target sarà quello eseguito di defoult con make altrimenti bisogna specificare il target con make target 
#(Verranno eseguite anche le dependency del target ovviamente mentre i target non dipendenti non verranno eseguiti)
#(Se un target ha una modifica più vecchia di una dependendy il target verra ricreato e quindi sovrascritto)

#Alcune short-cut sono: 
#--------------------------------------------
#$@== nome del current target 
#$^== nome delle dependency separate da spazi 
#$<== nome della PRIMA dependency
#%==pattern all'interno di un nome 
#--------------------------------------------

main.x: $(OBJECTS)
	$(CC) $^ -o $@¸
main.o: main.cpp
	$(CC) $(CFLAGS) $^

$(OBJCDIR)/libreria.o: libreria.cpp
	$(CC) $(CFLAGS) $^ -o $@





clear: 
	rm *.o $(OBJCDIR)/*.o 




