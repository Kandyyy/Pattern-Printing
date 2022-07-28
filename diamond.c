#include <stdio.h>

int main(){
    for(int row = 1;row<=5;row++){
        for(int spaces = 1;spaces<=5-row;spaces++){
            printf(" ");
        }
        for(int column = 1;column<=2*row-1;column++){
            printf("*");
        }
        printf("\n");
    }
    for(int row = 5;row>=1;row--){
        for(int spaces = 1;spaces<=5-row;spaces++){
            printf(" ");
        }
        for(int column = 1;column<=2*row-1;column++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
