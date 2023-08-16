//Practical Number      : 20

//------: Problem Specification :--------
//Find Square root
//4th method:
//function with arguments and with return value.



//Code  :
#include<stdio.h>

int FindSquare(int a)
{
	printf("square root of number : ");
	return a*a;
	
}
   
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	
	printf("%d",FindSquare(a));
	return 0;
}
	
//Output : 
/*
Enter the number : 4
square root of number : 16
*/

//Conclusion :
//The function is called by passing an argument to it, which then returns its square root as output.






