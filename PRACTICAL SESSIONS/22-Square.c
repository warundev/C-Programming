
//Practical Number      : 22

//------: Problem Specification :--------
/*
find the square value
*/

//Code  :

#include <stdio.h>

void FindSquare()
{
    int num,result;

    printf("Enter the Number :");
    scanf("%d",&num);

    result=num*num;

    printf("Square Root of %d is %d.",num,result);
}

int main()
{
    FindSquare();
    return 0;
}
	
//Output : 
/*
Enter the Number :8
Square Root of 8 is 64.
*/

//Conclusion :
/*
The user input number will be squared and then printed on screen as output .
*/


