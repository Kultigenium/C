#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Es wird eine Einkaufsliste erstellt wie folgt:
-die Person bestimmt die Anzahl der Produkte die Sie ientragen möchte 
- anschließend wird eine Liste erstllt 
- In diese Liste kann der User nun seine Artikel eingeben 
- So wird die Liste mit den Artikeln unterinander gelistet erstellt
- (Für später könnte es durch Merkamle gegleidert werden wie Obst gemüse Fleisch Mlich Eier Soßen etc )
- Anschließend wird nach der ANzeigen der Liste und der möglichkeite des Begutachtens gefragt ob Produkte fehlen 
- bei eingabe 0 wird beendet die Liste steht gegliedert untereinander gelistet da 
- Bei größer als 0 wird für gefargt wie viele artikel benötigt werden 
- die angegeben zahl erstllt wieder platz in der liste 
- user kann wieder eintragen was er benötigt 
- so kommt man wieder zu dem punkt vom vorhin 
- es geht so lange bis der user am ende 0 eingibt 
- gibt der user 0 ein so wird gefargt ob die liste stehen soll oder eine neue leere liste kreiert werden soll
- soll die alte bleiben so wird diese gespeichert 
- beim näshten aufruf erinnert es sich an das gespeicherte
- es wird ein neuer befehl aufgerufen vor allem anderen welche fragt liste weiter nutzen oder neu 
- bei weiter kommt es zum standard wie viel artikel usw. ...
- bei neuer liste wird alles gelöscht und neue liste angefretigt wieder von anfang 
- soll nach 0 eingabe neu eliste gewählt werden 

Zu jedem artikel einen weiteren wert zuweisen welche die menge des artiukels bestoimmt
*/

#define MAX_STRING_LENGTH 100

int main(){

    printf("Hello, this is your shopping List, please enter the amaoun of things you want to add: \n");




    //Double Pointer for Array of Strings
    char** products = NULL;
    //amount of strings 
    int size;
    scanf("%d",&size);
    while (getchar() != '\n');


    //Allocating memory for the array of strings
    products = (char**)malloc(size * sizeof(char*));
    //If unable ...
    if(products == NULL){
        fprintf(stderr,"Memeory allocation failed\n");
        return 1;
    }


    for(int i = 0; i < size; i++){

        products[i]= (char*)malloc((MAX_STRING_LENGTH +1 ) * sizeof(char));

        if (products[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        
        fgets(products[i], MAX_STRING_LENGTH, stdin);
    }
    
    printf("\n");
    printf("\n");

    printf("Deine Liste: \n");

    for(int i = 0; i < size; i++){
        printf("%s\n", products[i]);
        free(products[i]);
    }


    free(products);

    return 0;


}