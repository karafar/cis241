/*
Farid Karadsheh
CIS 241-04
Professor Xinli Wang
1/28/2019
*/
#include "helpers.h"

void populateArr( int n, int arr[] )
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void printArr( int n, int arr[] )
{
	for (int i = 0; i < n; i++)
	{
		printf("%3d    ", arr[i]);
		if ((i % 5) == 4)
		{
			printf("\n");
		}
	}
	printf("\n");
}

void copyArr( int n, int source_arr[], int copy_arr[] )
{
	for(int i = 0; i < n; i++)
	{
		copy_arr[i] = source_arr[i];
	}
}

double calcBubble( int n, int arr[] )
{
	clock_t start, end;
	double cpuTimeUsed;

	start = clock();
	bubbleSort(arr, n);
	end = clock();
	cpuTimeUsed = (((double) (end - start)) / CLOCKS_PER_SEC) * 1000;

	return cpuTimeUsed;
}

double calcSelection( int n, int arr[] )
{
	clock_t start, end;
	double cpuTimeUsed;

	start = clock();
	selectionSort(arr, n);
	end = clock();
	cpuTimeUsed = (((double) (end - start)) / CLOCKS_PER_SEC) * 1000;
	
	return cpuTimeUsed;
}