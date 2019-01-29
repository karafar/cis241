/*
Farid Karadsheh
CIS 241-04
Professor Xinli Wang
1/28/2019
*/
#include "sorting.h"

void bubbleSort( int arr[], int n )
{
	int swap = 0;
	for (int i = 0; i < n; i++)
	{
		int is_sorted = 1;
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
				is_sorted = 0;
			}
		}
		if (is_sorted == 1)
			return;
	}
	return;
}

void selectionSort( int arr[], int n )
{
	int temp = 0;
	for ( int i = 0; i < n -1; i++)
	{
		int min = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}