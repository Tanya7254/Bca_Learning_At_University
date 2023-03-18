//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include < stdio.h >  
int main()
{ 
    int num, bin = 0, rem = 0, place = 1;  
  
    printf("Enter a decimal number\n");  
    scanf("%d", &num);  
  
    printf("\nBinary equivalent of %d is ", num);  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    printf("%d\n", bin);    
  return 0;
}
