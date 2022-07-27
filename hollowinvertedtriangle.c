#include <stdio.h>

int main(){

    for(int row = 1;row<=8;row++){
        for(int column = 1;column<=8;column++){
            if(column == 1  || row==1 || column==9-row ){
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
