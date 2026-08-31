/*
Program1 - Write a program to make use of basic Input/Output funtion using different data type.
Solution(1) - Predefined Values
*/

# include <stdio.h>
int main ()
{
  int rollnum; 
  float pre;
  char grade;

  rollnum=55;
  pre=88.88;
  grade='A';
   
  printf("___Student Information___\n");
  printf("\n Rollnumber: %d", rollnum);
  printf("\n Precentage: %f", pre);
  printf("\n grade: %c", grade);

  return 0;
}
