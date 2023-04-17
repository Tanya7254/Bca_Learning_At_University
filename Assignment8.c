//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l;
    printf("Enter the string : ");
    gets(s);
    l=strlen(s); 
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]>s[j])
            {
                swap(&s[i],&s[j]);
            }
        }
    }
    printf("%s",s);

}

swap(char*s1 ,char*s2 )
{
    char temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}
 
