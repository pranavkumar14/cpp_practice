
#include <stdio.h>

main()
{
   int A,B,X,Y,ra1,ra2,da1,da2,da3,rb1,rb2,db1,db2,db3;
    scanf("%d %d",&A,&B);
    da1=A/100;
    ra1=A%100;
    da2=ra1/10;
    da3=ra1%10;
    X=da3*100+da2*10+da1;
    if(X%10==0)
    X=X/10;
    if(X%100==0)
     X=X/100;
     
       db1=B/100;
    rb1=B%100;
    db2=rb1/10;
    db3=rb1%10;
    Y=db3*100+db2*10+db1;
    if(Y%10==0)
    Y=Y/10;
    if(Y%100==0)
     Y=Y/100;
     
     if(X%2==0&&Y%2==0)
     printf("%d",X+Y);
     if(X%2==0||Y%2==0)
     printf("%d",A+B);
     else
     printf("%d",A*B);
     

    return 0;
}

