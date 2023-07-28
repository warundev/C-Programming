//Practical Number      : 12
//Problem Specification : Write an algorithm to find the Summation of first n natural numbers using loop and recursion both.


//Code  :

#include<stdio.h>

int main()
{
	int Num,sum=0,i;
	
	printf("Type a number  : \n");
	scanf("%d", &Num);
	
	 for(i = 1;i<=Num; i++)
	 {
		sum = sum+i ;
	 }
	
	printf("Summation of   : %d\n",sum);
	return 0;
}

//Output :
/*
Type a number  : 
8
Summation of   : 36
*/

//Conclusion :
/*
The program takes an integer as input from the user and then calculates its sum using loop structure by adding.
*/

