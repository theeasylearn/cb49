// fact

#include<stdio.h>

int fact(int n)
{
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

void main()
{
    printf("%d",fact(0));
}