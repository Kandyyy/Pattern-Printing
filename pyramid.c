#include <stdio.h>

void Pyramid(int i){
    for(int row = 1;row<=i;row++){
        for(int space = 0;space<=i-row;space++){
            printf(" ");
        }
        for(int column = 1;column<=2*row-1;column++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    Pyramid(9);
    return 0;
}


 
