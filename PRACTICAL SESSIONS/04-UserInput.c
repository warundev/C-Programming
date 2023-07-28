//Practical Number      : 04
//Problem Specification : Getting user input by C - Language,To get user input, you can use the scanf() function.

//Code :

#include<stdio.h>

int main()
{
    int age ;// Create an integer variable that will store the number we get from the user

    printf("Enter your Age: "); //Getting User Input for the variable "age" using scanf
    scanf("%d",&age);
    printf("\nYour entered Age is %d",age);//Printing out the value

    return(0) ;

}


//Output : 
/*
        Enter your Age: 21

        Your entered Age is 21
*/


//Conclusion : 
/*
The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&age), which stores the memory address of the variable.

*/