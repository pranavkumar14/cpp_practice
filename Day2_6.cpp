#include <stdio.h>

main()
{
    int n;
    scanf("%d\n",&n);
    int V[n][n];
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        scanf("%d",&V[i][k]);
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        printf("%d ",V[i][k]);
        printf("\n");
    }
    return 0;
}
