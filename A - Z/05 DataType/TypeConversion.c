//C Type Conversion---->

//Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.



//There are two types of conversion in C:--

/*
Implicit Conversion (automatically)
Explicit Conversion (manually)
*/

//Implicit Conversion---->

/*
Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

For example, if you assign an int value to a float type:
*/

#include <stdio.h>

int main() {
  // Automatic conversion: int to float
  float myFloat = 9;

  printf("%f", myFloat); //9.000000
  return 0;
}

/*  Automatic conversion: float to int,

#include <stdio.h>

int main() {
  
  int myInt = 9.99;

  printf("%d", myInt); // 9
  return 0;
}
*/



//Explicit Conversion:----->

/*
Explicit conversion is done manually by placing the type in parentheses () in front of the value.

Considering our problem from the example above, we can now get the right result:
*/
/* Manual conversion: int to float;

#include <stdio.h>

int main() {

  float sum = (float) 5 / 2;

  printf("%f", sum); // 2.500000
  return 0;
}
*/

//EX:-

/*
#include <stdio.h>

int main() {
  int num1 = 5;
  int num2 = 2;
  float sum = (float) num1 / num2;

  printf("%.1f", sum); // 2.5
  return 0;
}
*/
