#include <stdio.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)



{

	int number_left; /*Decarling statement*/

	int number_right;



	/*for 0-9 with ASCII*/

	for (number_left = 0; number_left <= 1; number_left++)

	{

		for (number_right = 0; number_right <= 1; number_right++)

		{

			putchar(number_left); /*print  number*/

			putchar (number_right);



			/*break program if the condition is true (if is 99)*/

			if ((number_left == 1) && (number_right == 1))

			{

				break; /*terminate the program*/

			}

			putchar(','); /*print (,)*/

			putchar (' '); /*print a space*/

		}



	}



	putchar('\n'); /*new line*/



	return (0);



}


