//Practical Number      : 03
//Problem Specification : A variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it.

//Code : 

#include <stdio.h>

int main()
{
    //Data Types in c 
    char name[]="C - programming language"; //to store the String Value
    int myNum = 23;
    float piValue=3.14 ;
    double dubNum = 36.966;


    printf("%s\n",name);
    printf("%d \n" ,myNum );
    printf("%f ",piValue) ;
    printf("\n%lf " ,dubNum ) ;

    return 0;
}


//Output :
/*

    C - programming language
    23 
    3.140000 
    36.966000 

*/


//Conclusion : 
/*
In this program, we have used different data types such as character array (string), integer and floating

-- int  ---> %d or %i
-- char  --> %c
-- float  -> %f
-- string -> %s
-- double -> %lf

*/