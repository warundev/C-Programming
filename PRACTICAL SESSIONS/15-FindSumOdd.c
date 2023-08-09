//Practical Number      : 15
//Problem Specification : Write an algorithm to find the sum of Odd Numbers.



//Code  :

#include<stdio.h>
int main()
{
	
	int i,num,sum=0;
	
	printf("Type a number  : ");
	scanf("%d", &num);
	
	printf("Odd Numbers : ");
	
	for(i=1;i<=num;i+=2)
	{
		printf("   %d",i);
		sum+=i;
	}
	
	printf("\nSummation of All Odd Numbers  : %d",sum);
	
	return 0;
}

//Output : 
/*
Type a number  : 12
Odd Numbers :    1   3   5   7   9   11      
Summation of All Odd Numbers  : 36
*/

//Conclusion :
/*
The program is working fine and printing all odd numbers from given range
and also calculating their Sum .
*/