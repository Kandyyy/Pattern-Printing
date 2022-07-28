#include <stdio.h>

void HollowRightTriangle(int i){
    for(int row = 1;row<=i;row++){
        for(int column = 1;column<=i;column++){
            if(column == 1 || row==column || row==i){
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
    HollowRightTriangle(20);
    return 0;
}
