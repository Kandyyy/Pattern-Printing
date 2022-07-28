#include <stdio.h>

void MirrorRightTriangle(int i){
    for(int row = 0;row<=i;row++){
        for(int column = 0;column<=i;column++){
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
    MirrorRightTriangle(7);
    return 0;
}
