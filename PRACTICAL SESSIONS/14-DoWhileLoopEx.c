//Practical Number      : 14
//Problem Specification : Write an algorithm to find the sum of n integers entered through keyboard .



//Code  :

#include<stdio.h>

int main(){
	
	int num,sum=0;
	
	do{
		printf("Type a positive integer number  : \n");
	    scanf("%d", &num);
		sum=sum+num;
	
	}while(num!=0);
	
	printf("Sum of Numbers : %d\n",sum);
	
	return 0;
}


//Output : 
/*
Type a positive integer number  : 
5
Type a positive integer number  : 
2
Type a positive integer number  : 
8
Type a positive integer number  : 
6
Type a positive integer number  : 
0
Sum of Numbers : 21
*/

//Conclusion :
/*
The program takes input from the user until he enters zero and then it calculates sum of all numbers
entered by the user using do-while loop in C language.
*/
