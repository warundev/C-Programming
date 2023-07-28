//Practical Number      : 08
//Problem Specification : Get the two numbers from the user and apply them to different operators.


//Code  :

#include <stdio.h>

int main()
{
   int num1,num2,sum,sub,mul;
   
   printf("Enter the number1 : ");
   scanf("%i",&num1);
   
   printf("Enter the number2 : ");
   scanf("%i",&num2);
   
   sum = num1+num2;
   sub = num1-num2;
   mul= num1*num2;
   float div = (float)num1/num2;
   
   printf("Addition of Numbers: %i\n",sum);
   printf("Subtraction of Numbers: %i\n",sub);
   printf("Multiplication of Numbers: %i\n",mul);
   printf("Division of Numbers: %f\n",div);
   

  return 0;
}

//Output :
/*
Enter the number1 : 8
Enter the number2 : 2
Addition of Numbers: 10
Subtraction of Numbers: 6
Multiplication of Numbers: 16
Division of Numbers: 4.000000
*/

//Conclusion :
/* 

In this program we have taken input for two integers using "scanf()" function which stores it in variables
"num1","num2". Then three arithmetic operations are performed on these values by assigning their respective
operators (+,-,*). 
Finally results obtained after each operation is printed with appropriate message using "%d,%
operators to them and storing results back into new variable names such as 'sum', 'sub' &
'mul'. 
Finally division operation is also done but with floating point value so that decimal places can be
displayed accurately through "%f" format specifier while printing output result.

*/

