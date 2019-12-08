
#include <stdio.h>

int gcd(int x,int y)
{
    if(x%y==0)
    return y;
    else if(y%x==0)
    return x;
    else if(x>y)
    gcd(y,x-y);
    else
    gcd(x,y-x);
}


main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    
    ans= gcd(a,b);
    
    printf("%d",ans);

}

