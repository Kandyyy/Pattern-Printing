#include <stdio.h>

int main(){

    for(int row = 1;row<=4;row++){
        for(int column = 1;column<=4;column++){
            if(column>=5-row && column<=4){
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
