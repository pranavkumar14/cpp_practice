

#include <stdio.h>

main()
{
    int num,l1,l2,l3,l4,l5,l6,n1,n5,n10,n50,n100,n500,n2000;
    scanf("%d",&num);
    n2000=num/2000;
    l1=num%2000;
    n500=l1/500;
    l2=l1%500;
    n100=l2/100;
    l3=l2%100;
    n50=l3/50;
    l4=l3%50;
    n10=l4/10;
    l5=l4%10;
    n5=l5/5;
    l6=l5%5;
    n1=l6;
    printf("2000s=%d \n500s=%d\n100s=%d\n50s=%d\n10s=%d\n5s=%d\n1s=%d",n2000,n500,n100,n50,n10,n5,n1);

    return 0;
}

