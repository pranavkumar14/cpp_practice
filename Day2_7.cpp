#include<stdio.h>

int factorial(int n)
{
    if(n==1)
    return 1;
    else if(n>1)
    return n*factorial(n-1);
    }

    main()
    {
        int num,x;
        scanf("%d",&num);
        x=factorial(num);
        printf("%d",x);
    }