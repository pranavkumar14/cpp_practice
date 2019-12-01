//collatz conjecture
#include<stdio.h>

int collatz(int x)
{   
    if(x==1)
    {
    return 0;
    }
    if(x%2==1)
        
    {
        printf("%d ",3*x+1);
    collatz(3*x+1);
    }

    else
    {
    printf("%d ",x/2);
    collatz(x/2);
    }
    
}

int main()
{
    int x;
    scanf("%d",&x);
    collatz(x);
}

