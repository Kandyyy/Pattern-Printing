#include<stdio.h>

int main(){

    for (int i = 0; i < 4; i++)
    {
        for (int spaces = 0; spaces < 4-i; spaces++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if(j==0) printf("* ");
            if(j==1) printf("# ");
            if(j==2) printf("@ ");
            if(j==3) printf("? ");
        }   
        printf("\n");   
    }
    return 0;
}