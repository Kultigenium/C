#include <stdio.h>
#include <stdlib.h>
#include "Delet_Rename.h"
#include "fileCreating.h"


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




int main (){


    void deletandrename();
    void createfile();


    char name[50];
 
    int a;

    scanf(" %[^\n]",name);

   // system("clear");


   for(int i = 0; i < a; i++){
    
   }





    printf("Einkaufsliste\n");

    printf("%s\n",name);









                //How to empty an Array

    
    //Creat array
    char arr[20]= { 'a', 'b', 'c', 'd', 'f'};
    printf("BEfore: ");
    for(int i = 0; i <= 20; i++){
        printf("%c ", arr[i]);
        if(i  == 19){
            printf("\n");
            break;
        }
    }



    //How to clear the Array

    //memset(arr, '\0', sizeof(arr));
    //strcpy(arr, ""); 
    //arr[0] = '\0';
    /*for(int i =0; i <= 20; i++){
        arr[i] = '\0';
    }*/



    //Controlling the Array
    arr[3]= 'p';
    printf("ziwschen ergbnis %c \n", arr[3]);
    printf("After: ");
    for(int i = 0; i <= 20; i++){
        printf(" %c ", arr[i]);
        if(i == 19 ){
            printf("\n");
            printf("end\n");
            break;
        }
    }



    return 0;
    
}
