/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2;
	float sum=0,avg=0;
	
	printf("Input numbre 1 : ");
	scanf("%d",&num1);
	printf("input number 2 : ");
	scanf("%d",&num2);
	
	sum = num1 + num2;
	avg = sum / 2.0;
	
	printf("Average = %.2f",avg);
  return 0;
}

