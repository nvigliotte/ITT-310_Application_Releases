/////////////////////////////
//  Nicholas Vigliotte
//  ITT-310
//  May 30, 2021
// Jeremy Wright
/////////////////////////////
//
// CHORE-TELLER 
//   Ver. 1.0
/////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//Variable for entering current day of the week
int dayOfWeek;

//Main function that contains loop and decision for chores
int main()
{
	//Prints the welcome message and prompts the user for day of the week
	printf("Welcome to the Chore-Teller!");
	printf("\nPlease enter the day of the week (Monday = 1, Sunday = 7): ");
	scanf_s("%d", &dayOfWeek);

	//Start of loop/decision function with the corresponding chores to day
	if (dayOfWeek == 1)
	{
		printf("\nChore of the Day: Sweep Floors");
	}
	else if (dayOfWeek == 2)
	{
		printf("\nChore of the Day: Dust the House");
	}
	else if (dayOfWeek == 3)
	{
		printf("\nChore of the Day: Take out Trash");
	}
	else if (dayOfWeek == 4)
	{
		printf("\nChore of the Day: Clean Bathroom");
	}
	else if (dayOfWeek == 5)
	{
		printf("\nChore of the Day: Clean the Kitchen");
	}
	else if (dayOfWeek == 6)
	{
		printf("\nChore of the Day: Laundry Day!");
	}
	else if (dayOfWeek == 7)
	{
		printf("\nChore of the Day: No Chores :) Enjoy the Day!");
	}
	else
		printf("\nNice try....enter a valid day");
	//End of chore to day loop/decision

	//End Function
	return 0;
}