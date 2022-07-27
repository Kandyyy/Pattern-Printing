#include <stdio.h>

int main(){

    for(int row = 1;row<=6;row++){
        for(int column = 1;column<=6;column++){
            if(column == 1 || row==column || row==6){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
