//Practical Number      : 19

//------: Problem Specification :--------
//Find Square root
//3rd method:
//function with arguments and without return value. 



//Code  :
#include<stdio.h>

void FindSquare(int a)
{
   
	printf("square root of number : %d ",a*a);
	
}
   
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	
	FindSquare(a);
	return 0;
}
	
//Output : 
/*
Enter the number : 8
square root of number : 64
*/

//Conclusion :
//The function is called by passing argument to it, which then calculates square root of that particular number and prints out on screen.




