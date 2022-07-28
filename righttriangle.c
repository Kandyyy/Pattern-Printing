#include <stdio.h>

void RightTriangle(int i){
    for(int row = 0;row<i;row++){
        for(int column = 0;column<=row;column++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    RightTriangle(5);
    return 0;
}
