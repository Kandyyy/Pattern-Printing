#include <stdio.h>

void ReversedRightTriangle(int i){
    for(int row = i;row>=1;row--){
        for(int column = 0;column<row;column++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){


    ReversedRightTriangle(7);
    return 0;
}