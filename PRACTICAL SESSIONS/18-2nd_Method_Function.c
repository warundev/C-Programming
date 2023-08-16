//Practical Number      : 18

//------: Problem Specification :--------
//Find Square root
//2nd method:
//funtion without arguments and with return value.   



//Code  :
#include<stdio.h>

int FindSquare()
{
   int a,result;

	printf("Enter the number : ");
	scanf("%d",&a);
	
	result= a*a;
	
	printf("Square root of is : ");
	return result;
}
   
int main()
{
	printf("%d",FindSquare());
	return 0;
}
	
//Output : 
/*
Enter the number : 5
Square root of is : 25
*/

//Conclusion :
//In this program we have used function without argument but it has returned value.

