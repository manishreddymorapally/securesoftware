#include <stdio.h> 

#include <stdlib.h>  

 

int main(void) { 

    char *thing = malloc(5); 

    thing[0] = 'a'; 

    thing[1] = 'b'; 

    thing[2] = 'c'; 

    thing[3] = 'd'; 

    thing[4] = '\0'; 

    free(thing); 

     

    printf("%s\n", thing); 

}
