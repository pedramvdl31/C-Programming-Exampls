#include <stdio.h>

main() {
	int my_array[100];
	int num = 99;
	int size, i, j, temp, y;

	printf("Please Enter Array Size:\n");
	scanf("%d", &size);

	printf("The size of array is %d.\n", size);

	printf("Please Enter an integer for every slot: \n");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &my_array[i]);
	}

	/*
	Array Sorting
	*/
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (my_array[j]<my_array[i])
			{
				temp = my_array[i];
				my_array[i] = my_array[j];
				my_array[j] = temp;
			}
		}
	}

	printf("\nElement of array in ascending order:");
	for (y = 0; y<size; y++)
	{
		printf("\n%d\n", my_array[y]);
	}


}