#include<stdio.h>
int main()
{
    int a=1;
    #if(a==1)
    printf("eqaul\n");
    #elif
    printf("not");
    #endif;
    return 0;
}