/*----C Recursion-----
The process of making a function call itself is known as recursion. With the use of this strategy, complex issues may be reduced to more manageable, simpler ones.
Recursion could be a little challenging to comprehend. Experimenting with it is the most effective approach to learn how it functions.
*/

//Practical Number      : 21

//------: Problem Specification :--------
/*
The program calculates the sum of integers within a range using recursion. 
The user inputs an integer, and the recursive function sum calculates the sum from 1 to the input value. 
The base case is when the input value becomes 0, and the program prints the calculated sum.
*/

//Code  :
#include<stdio.h>

int sum(int n);

int main()
{
	int n;
	printf("Enter an int value: ");
	scanf("%d",&n);
	
	printf("The sum of the value range : %d\n",sum(n));
	return 0;
}

int sum(int n)
{
	if (n!=0)
	{
		return n+sum(n-1);
	}else{
		return n;
	}
}

	
//Output : 
/*
Enter an int value: 10
The sum of the value range : 55
*/

//Conclusion :
/*
The given C program demonstrates the concept of recursion by calculating the sum of integers in a given range. 
The program prompts the user to input an integer value, and then it calculates the sum of all integers from 1 to the entered value using a recursive function. 
The calculated sum is then printed as output.
*/


