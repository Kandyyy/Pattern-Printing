#include <stdio.h>
#include <stdlib.h>

void pyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n-(i+1); space++)
        {
            printf(" ");
        }
        for (int j = 0; j < (i+1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    pyramid(5);
    return 0;
}