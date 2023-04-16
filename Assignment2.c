//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task
#include<stdio.h>
int main() 
{
   int n,count=0;;
  while(1){
  printf("Enter the number\n");
  scanf("%d",&n);
    if(n%8==0)
    {      count++;
    }else
    {
      printf("The number of valid numbers entered is %d",count);
      break;
    }
  }
  
  return 0;
}
