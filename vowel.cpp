
#include <stdio.h>

main()
{
    char str[]={'a','e','i','o','u'},alph;
    int i;
    scanf("%c",&alph);
    for(i=0;i<5;i++)
    {
        if(alph==str[i])
        {
        printf("Vowel");
        break;
        }
    }
        if(i==5)
        printf("consonant");


    return 0;
}


