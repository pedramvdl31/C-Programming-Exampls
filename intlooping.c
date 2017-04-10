#include <stdio.h>
int main()
{
	int num; 	/*to store number*/

			/*Reading the number*/
	printf("Enter an integer number: ");
	scanf("%d", &num);


	/*loop from 1 to 10*/
	while (num != 0) {
		printf("%d\n", (num));
		num--; /*Increase loop counter*/
	}

	return 0;
}