#include<stdio.h>

main()
{
    int n,max,temp,index,i,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=n-1;i>0;i--)
    {
        max=0;
        index=0;
        for(j=0;j<=i;j++)
        {
           if(arr[j]>max)
          {
            max=arr[j];
            index=j;
          }
        }
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    for(int t=0;t<n;t++)
    printf("%d ",arr[t]);
}