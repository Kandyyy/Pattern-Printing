#include <stdio.h>

int draw_rectangle(int length, int breadth){

for(int i = 0; i <= breadth-1; i++){

        
        for(int x = 0; x <= length-2; x++){

        printf("*");

    }

    printf("*");
    printf("\n");

    }

}




int main(){

    

    draw_rectangle(15,10);

    

    return 0;

}