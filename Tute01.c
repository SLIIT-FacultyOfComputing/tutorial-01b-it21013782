/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
	float sum=0,avg=0;
	
	printf("Input mark of subject 1 : ");
	scanf("%d",&mark1);
	printf("input mark of subject 2 : ");
	scanf("%d",&mark2);
	
	sum = mark1 + mark2;
	avg = sum / 2.0;
	
	printf("Average of the two marks = %.2f",avg);
  return 0;
}

