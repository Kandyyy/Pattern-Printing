#include <stdio.h>

void Diamond(int i){
    for(int row = 1;row<=i;row++){
        for(int spaces = 1;spaces<=i-row;spaces++){
            printf(" ");
        }
        for(int column = 1;column<=2*row-1;column++){
            printf("*");
        }
        printf("\n");
    }
    for(int row = i;row>=1;row--){
        for(int spaces = 1;spaces<=i-row;spaces++){
            printf(" ");
        }
        for(int column = 1;column<=2*row-1;column++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    Diamond(10);
    return 0;
}
