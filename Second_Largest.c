/*

Write a C program that:

Takes an integer n as the number of elements.

Reads n integers into an array.

Finds and prints the second largest unique number in that array.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void findSecondLargest(int arr[], int n);
void findSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = -1;
    if (n < 2)
    {
        printf("enter at least 2 integers");
    }
    else if (n >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < largest && arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }
        
        if (secondLargest == (-1))
        {
            printf("all intergers are same");
        }
        else
        {
            // return secondLargest;
            printf("the second largest integer is: %d", secondLargest);
        }
    }
}


int main()
{
    int k;
    printf("enter the number of elements, you want in an array of integers: \n");
    scanf("%d", &k);
    
    int arr[k];
    srand(time(0));
    for (int i = 0; i < k; i++)
    {
        arr[i] = rand() % 100; // random number between 0 and 99
    }
    
    printf("{");
    for (int i = 0; i < k; i++)
    {
        if (i == k-1)
        {
            printf("%d", arr[i]);
        }
        else printf("%d, ", arr[i]);

        
    }
    printf("}\n");
    
    findSecondLargest(arr, k);
    return 0;
}
