#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 5-(row); column++)
        {
            printf("%d",column+1);
        }
        printf("\n");
    }
    
    return 0;
}