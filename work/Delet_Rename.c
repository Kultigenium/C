#include <stdio.h>


void deletandrename(){   
   

const char *file = "Anyfile.c";

if(remove(file) == 0){
    printf("File deleted successfully. \n");
}else{
    printf(" Error: Unable to delet the file.\n");
}


char old_name[] = "file1.c";

char new_name[] = "main.c";
int value;

value = rename(old_name, new_name);

if(!value){
    printf("%s", "File name changend successfully");
}else{
    perror("Error");
}

return ;


}