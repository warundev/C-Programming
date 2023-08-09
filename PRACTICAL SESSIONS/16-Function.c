//Practical Number      : 16
//Problem Specification : 

//Write a program to print "Hello" using printf().
//Create function and call it.


//Code  :

#include<stdio.h>

void msgprint();//Function declaration

int main()
{
	printf("Hello..! \n");
	msgprint();//Call a Function
}

void msgprint()
{
	printf("This is the msgprint Function..!");
}


//Output : 
/*
Hello..! 
This is the msgprint Function..!
*/

//Conclusion :

//--Function Aspects--
/*

1- Function declaration:---

	return_type function_name (argument list);
  
2- function call:--- 

	function_name(argument_list);
   
3- function definition:---

	return_type function_name (argument_list)
	{
		function body;
	}
*/

//----Types of Function calling----

/*
* function without arguments and without return value.
* function without arguments and with return value.
* function with arguments and without return value.
* function with arguments and with return value.
*/
