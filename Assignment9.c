//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int count;
    int a;
   printf("Enter the string : ");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        a=1;
        count=0;
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                a=0;
                break;
            }
        }
        if(a==1)
        {
            for(int j=0;j<strlen(s);j++)
            {
                if(s[i]==s[j])
                    count++;
            }
            printf("%c : %d\n",s[i],count);
        }
    }

}
