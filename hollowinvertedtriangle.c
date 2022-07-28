#include <stdio.h>

void HollowInvertedTriangle(int i){
    for(int row = 1;row<=i;row++){
        for(int column = 1;column<=i;column++){
            if(column == 1  || row==1 || column==(i+1)-row ){
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
    HollowInvertedTriangle(8);
    return 0;
}
