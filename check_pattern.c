#include<stdio.h>

int main()
{
    int i,j;
    for(i=5; i>0; --i)
    {
        for(j=1;i>=j;++j)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}