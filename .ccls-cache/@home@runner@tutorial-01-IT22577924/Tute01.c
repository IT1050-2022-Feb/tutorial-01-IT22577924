/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a,b;
  float average;
  
  //take marks from user
  printf("Enter the marks of first subject:");
  scanf("%d",&a);
  printf("Enter the marks of second subject:");
  scanf("%d",&b);

  //calculation and output
  average=(float)(a+b)/2;
  printf("Average of the two marks = %.2f",average);
  
  
  return 0;
}

