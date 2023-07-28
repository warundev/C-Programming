//Practical Number      : 11
//Problem Specification : Using Do While Loop in C language.


//Code  :

//Do While Loop:-----

//Syntax:
/*
	do {
		statement(s);
	}while(condition);

*/

#include<stdio.h>

int main()
{
	//local variable definition
	int a =10;
	
	//do loop execution
	do{
		printf("value of a: %d\n",a);
		a= a+1;
	}while(a<15);
	
	return 0;
}

//Output :
/*

value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14

*/

//Conclusion :

/*
The do/while loop is a variant of the while loop. 
This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

In this type, we first execute all statements inside it and then check if condition holds true or not
If yes, again executes statement block until false occurs in conditional expression


*/