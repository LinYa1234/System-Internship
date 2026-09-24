#include <stdio.h>

int main()
{
    short int sint = 32767;
    int i = 32768;
    long int lint = 2147483647;

    printf(" %hd %d\n",sint,sint);
    printf(" %hd %d\n",i,i);
    printf(" %ld %d\n",lint,lint);
    return 0;



}