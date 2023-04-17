//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findType(n,arr);
}

void findType(int n,int *arr)
{
    int temp1,temp2;
    temp1=(*arr)%2;
    for(int i=0;i<n;i++)
    {
        temp2=*(arr+i)%2;
        if(temp2!=temp1)
        {
            printf("MIXED!");
            exit(1);
        }
    }

    if(temp1==0)
        printf("EVEN!");
    else
        printf("ODD!");

}

