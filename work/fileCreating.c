#include <stdio.h>
#include <stdlib.h>



void createfile() {

    FILE* fptr;

    fptr = fopen("Anyfile", "a");  //Diffrent File Typ possible like .text ...
    //w löscht gesamten inhalt falls Anyfile exsistiert
    // Daher auch anderee openening modes verfügbar


    if (fptr == NULL){

        perror("Fehler beim Erstellen der Datei");

        fprintf(stderr, "Error: The file could not be opened.\n");
        return;
    }
   printf("The file is created successfully.");


    fclose(fptr);

}