#include <stdio.h>

int main(){

    for(int row = 1;row<=5;row++){
        for(int space = 0;space<=5-row;space++){
            printf(" ");
        }
        for(int column = 1;column<=2*row-1;column++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


 
