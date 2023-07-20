/*
Variables are containers for storing data values, like numbers and characters.

In C, there are different types of variables (defined with different keywords), for example:

* int - stores integers (whole numbers), without decimals, such as 123 or -123
* float - stores floating point numbers, with decimals, such as 19.99 or -19.99
* char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

*/


#include <stdio.h>

int main() {
  // Student data
  int studentID = 3;//Declare and Assign a value to the variable.
  int studentAge = 23;
  float studentFee = 100.99;
  char studentGrade = 'A';

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);

  return 0;
}


//Declare Multiple Variables--->

/*
#include <stdio.h>

int main() {
  int x = 5, y = 6, z = 50;
  printf("%d", x + y + z);
  return 0;
}
*/

//C Variable Names---->

/*
All C variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
*/


//int minutesPerHour = 60;  --->Good


//int m = 60; ---->  OK, but not so easy to understand what m actually is

//The general rules for naming variables are:---

/*
-> Names can contain letters, digits and underscores
-> Names must begin with a letter or an underscore (_)
-> Names are case sensitive (myVar and myvar are different variables)
-> Names cannot contain whitespaces or special characters like !, #, %, etc.
-> Reserved words (such as int) cannot be used as names
*/