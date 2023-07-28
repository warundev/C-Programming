//Practical Number      : 13
//Problem Specification : Write an algorithm that takes input from the user and calculates its factorial using recursion or iteration method.


//Code  :


#include<stdio.h>

int main(){
	
	int num,i=1,sum=0;
	
	printf("Type a number  : \n");
	scanf("%d", &num);
	
	while(i<=num){
		sum = sum+i ;
		i++;
	}
	
	printf("Summation of 1 to %d  : %d\n",num,sum);
	return 0;
}

//Output :
/*
Type a number  : 
6
Summation of 1 to 6  : 21
*/

//Conclusion :
/*
The program takes an integer input from the user and then calculates its sum by adding all numbers between one.
*/
