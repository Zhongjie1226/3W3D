#include <stdio.h>

int main()
{
    int i=1;

    while(i)
    {
        if(i%1000==1)
            printf("\n");

        printf("16-9  ");
        i++;
    }

    return 0;
}