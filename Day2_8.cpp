#include<stdio.h>

int main()
{
    int A[1000];
    int n,i;
    scanf("%d",&n);
    A[0]=1;
    A[1]=1;
    for(i=2;i<=n;i++)
        A[i]=A[i-1]+A[i-2];
        printf("%d",A[n-1]);
}

