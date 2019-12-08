#include<stdio.h>
void dot(int* u,int* v,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum=sum+u[i]*v[i];
    printf("%d",sum);

}
int main()
{
    int n;
     scanf("%d",&n);
    int A[n],B[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&B[i]);
    dot(A,B,n);
}