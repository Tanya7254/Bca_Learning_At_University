//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

#include<stdio.h>
void main()
{
    int choice;
    float num1,num2,res;
    char ch;

    do
    {
    printf("Press 1 for addition \nPress 2 for subtraction \nPress 3 for multiplication\nPress 4 for division\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                res=num1+num2;
                break;
            case 2:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                res=num1-num2;
                break;
            case 3:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                res=num1*num2;
                break;
            case 4:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                res=num1/num2;
                break;

        }
    printf("Output of the operation is : %f\n",res);
    printf("Do you want to continue : ");
    fflush(stdin);
    scanf("%c",&ch);
    printf("\n\n\n");

    }

     while(ch=='y' || ch=='Y');
}
