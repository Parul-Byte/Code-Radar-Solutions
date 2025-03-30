/******* Factorial of a given number using Recursion ******/ 
#include<stdio.h> 
int fact(int n); 
void main( ) 
{ 
int num,result; 
printf("enter number:"); 
scanf("%d",&num); 
result=fact(num); 
printf("The factorial of a number is: %d",result); 
} 
int fact(int n) 
{ 
if(n==0) 
return 1; 
else 
return (n*fact(n-1));
