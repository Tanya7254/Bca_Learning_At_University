//Convert an decimal to its binary equivalent using a bitwise operator

#include<stdio.h>
void main()
{
    int num,i,result;
    printf("Enter a number  :");
    scanf("%d",&num);
    printf("Binary equivalent is :\n");
    for(i=31;i>=0;i--)
    {
        result=num>>i;
        if(result&1)
            printf("1");
        else
            printf("0");
    }

}

