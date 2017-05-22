/**
 * C program to copy one array to another array
 */
 
#include <stdio.h>
 
int main()
{
    int first[100], second[100];
    int i, size;
 
    /*
     * Reads size and elements in the array from user
     */
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter elements of first array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &first[i]);
    }
 
    /*
     * Copies all elements from first array to second array
     */
    for(i=0; i<size; i++)
    {
        second[i] = first[i];
    }
 
    /* 
     * Prints all elements of first array
     */
    printf("\nElements of first array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", first[i]);
    }
 
    /*
     * Prints all elements of second array
     */
    printf("\nElements of second array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", second[i]);
    }
 
    return 0;
} 