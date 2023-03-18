//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include <stdio.h>
int main() 
  {
    int scores[50];
    int i, num;
    int max = 0;
    printf("Enter the number of students: ");
    scanf("%d",&num);
    for(i = 0; i < num; i++) 
  {
        printf("Enter score for student %d: ", i+1);
        scanf("%d", &scores[i]);
        if(scores[i] > max)
          {
            max = scores[i];
          }
    }
	printf("\nPassed students:\n");
    for(i = 0; i < num; i++) 
	{
        if(scores[i] >= 50 && scores[i] != -1) 
          {
            printf("Student %d: %d\n", i+1, scores[i]);
          }
        }
    printf("\nFailed students:\n");
    for(i = 0; i < num; i++) 
	{
        if(scores[i] < 50 && scores[i] != -1) 
	  {
            printf("Student %d: %d\n", i+1, scores[i]);
          }
        }
    printf("\nMaximum score: %d\n", max);
    return 0;
}
