//Practical Number      : 07
//Problem Specification : Using a switch statement in C language.


//Code  :

	#include<stdio.h>

	int main()
 	{
	  int day;
	  printf("Enter the day number (between 1 and 7): ");
	  scanf("%i",&day);

	switch(day)
  	{
	case 1:
	  printf("Monday");
	  break;

	case 2:
	  printf("Tuesday");
 	  break;

	case 3:
 	  printf("Wednesday");
 	  break;

	case 4:
	  printf("Thursday");
 	  break;

	case 5:
	  printf("Friday");
 	  break;

	case 6:
  	 printf("Saturday");
  	 break;

	case 7:
 	 printf("Sunday");
	 break;

	default:
	printf("Invalid Number..! Please Try again.");
	}

	return 0;
	}


//Output :
/*
Enter the day number (between 1 and 7):
Monday
*/

//Conclusion :
/*

In this program, we have used a switch statement to check for different values of input. By the user
    
*/

