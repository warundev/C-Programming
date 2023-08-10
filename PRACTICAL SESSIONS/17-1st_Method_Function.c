//Practical Number      : 17
//------: Problem Specification : --------
//find the square value
//1st method:
//funtion without arguments and without return value  



//Code  :
#include<stdio.h>

void FindSquare()
{
   int a,result;

	printf("Enter an Integer number to find the Square Value: ");
	scanf("%d",&a);
	
	result= a*a;
	
	printf("Square root of %d is : %d",a,result);
}
   
int main()
{
	FindSquare();
	return 0;
}
	
//Output : 
/*
Enter an Integer number to find the Square Value: 10
Square root of 10 is : 100
*/

//Conclusion :
/*The function has no argument but it can have any type of data as its parameter or return
values.*/