//Practical Number      : 15
//Problem Specification : Write an algorithm to find the sum of Odd Numbers.



//Code  :

#include<stdio.h>
int main()
{
	
	int i,num,sum=0;
	//Reading number
	printf("Enter any number  : ");
	scanf("%d", &num);
	
	printf("Odd Numbers : ");
	
	for(i=1;i<=num;i+=2)
	{
		printf("   %d",i);
        //Adding current odd number to sum variable.
		sum+=i;
	}
	
	printf("\nSummation of All Odd Number between 1 to %d : %d",num,sum);
	
	return 0;
}

//Output : 
/*
Enter any number  : 12
Odd Numbers :    1   3   5   7   9   11
Summation of All Odd Number between 1 to 12 : 36 
*/

//Conclusion :
/*
The program is working fine and printing all odd numbers from given range
and also calculating their Sum .
*/