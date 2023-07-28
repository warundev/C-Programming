//Practical Number      : 06
//Problem Specification : Considering whether a number received by the user is odd or even using C- language.

//Code  :

	#include<stdio.h>

	int main(){

	    int num;

	    printf("Enter the number : ");
	    scanf("%d",&num);

	    if(num%2 == 0){
	     printf("Even Number");
	    }
        else{
	     printf("Odd Number");
	    }
	  return 0;
	}


//Output :
/*
Enter the number : 1
Odd Number

Enter the number : 2
Even Number
*/

//Conclusion :
/*
    In this program, we have taken an integer input from the user and checked it's parity.(odd or even)
*/



