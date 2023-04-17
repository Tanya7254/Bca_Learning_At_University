//Write a code find the length of a string and its reverse equivalent without using readymade c functions
#include<stdio.h>
int main()
{
    char s[100];
    int count=0;
    printf("Enter the string : ");
    gets(s);
    for(int i=0;s[i]!='\0';i++) // length of the string
    {
        count++;
    }


    for(int i=0;i<(count/2);i++) // reversing of a string
    {
        swap(&s[i],&s[count-i-1]);
    }
    printf("Length of the string is : %d\nReversed string is : %s ",count,s);
}

swap(char*s1 ,char*s2 )
{
    char temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}
  return 0;
}
