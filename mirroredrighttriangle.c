#include <stdio.h>

void MirrorRightTriangle(int i){
    for(int row = 1;row<=i;row++){
        for(int column = 1;column<=i;column++){
            if(column>=i-row && column<=i){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    MirrorRightTriangle(6);
    return 0;
}
