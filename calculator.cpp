
#include <stdio.h>

main()
{
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    
    if(op=='+')
    printf("%d",a+b);
    
     else if(op=='-')
    printf("%d",a-b);
    
    else if(op=='*')
    printf("%d",a*b);
    
    else if(op=='/')
    printf("%f",(float)a/b);
    
    else
    printf("Syntax Error");

    return 0;
}

