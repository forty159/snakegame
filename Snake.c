#include <stdio.h>

// main class


int main(int argc, char** argv) 
{
	//int for up position
	int a;
	//int for down position
	int b;
	//int for left position
	int c;
	//int for right position
	int d;
	
	//Gameplay instruction
	printf("******************************************************\n");
	printf("               Welcome to the Snake Game              \n");
	printf("******************************************************\n");
	printf("*****************Gameplay Instructions****************\n");
	printf("For this game the user is to input a number between 1 and 10 \n");
	printf("When the user inputs the correct number the snake will move in the appropriate direction\n");
	printf(" the snake moves in a position using...10 and going left, right, up or down.\n");
	printf("Enter 4 position numbers for up, down, right\n");
	printf("Enter a number for the up position:\n");
	scanf_s("%d", &a);
	printf("Enter a number for the down position:\n");
	scanf_s("%d", &b);
	printf("Enter a number for the left position:\n");
	scanf_s("%d", &c);
	printf("Enter a number for the right position:\n");
	scanf_s("%d", &d);

	
	
		if (a == 10) {
			printf("You got snake food for the up position!");
			return 0;
		}
		else
		{
			printf("Wrong value for the up position! snake gets no food.");
			return 0;
		}
	
	if (b == 10) {
		printf("You got snake food! ");
		return 0;
	}
	else
	{
		printf("Wrong value! snake gets no food.");
		return 0;
	}

	if (c == 10) {
		printf("You got snake food for the up position!");
		return 0;
	}
	else
	{
		printf("Wrong value for the up position! snake gets no food.");
		return 0;
	}
	
	if (d == 10) {
		printf("You got snake food for the up position!");
		return 0;
	}
	else
	{
		printf("Wrong value for the up position! snake gets no food.");
		return 0;
	}

}

