//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include<stdio.h>
int main()
{
   int pos=0,neg=0,count,num;
   printf("How many numbers you want to enter? :");
   scanf("%d",&count);
	for(int i=1; i<=count;i++)
{
  printf("Enter the number%d :",i);
  scanf("%d",&num);
 if (num > 0)
{
     pos++;
  }
     else if (num < 0)
  {
     neg++;
   }
}
printf("Total number of Positive number: %d",pos);
printf("\nTotal number of negative number: %d",neg);
return 0;
}
