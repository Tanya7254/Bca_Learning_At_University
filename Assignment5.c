//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include<stdio.h>
int main()
{
  
//Initialize an array to store the scores of the students
scores = []

//Read in the scores from the user
num_students = int(input("Enter the number of students: "))
for i in range(num_students):
    score = int(input("Enter the score for student {}: ".format(i+1)))
    scores.append(score)

//Compute the maximum score
max_score = max(scores)

//Initialize empty lists for passed and failed students
passed_students = []
failed_students = []

//Iterate through the scores and determine who has passed and who has failed
for score in scores:
    if score == -1:
        continue
    elif score >= 50:
        passed_students.append(score)
    else:
        failed_students.append(score)
  return 0;
}
