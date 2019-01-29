/*
Farid Karadsheh
CIS 241-04
Professor Xinli Wang
1/28/2019
*/

#include "sorting.h"
#include "helpers.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	while(1)
	{
		// Setup
		int n = 0;
		double bub_best = 0, bub_avg = 0;
		double sel_best = 0, sel_avg = 0;
		printf("Please input the size of the array: ");
		scanf("%d", &n);
	
		// Exit if n is too small
		if (n <= 1) exit(-1);

		// Array setup.
		int bub_arr[n], sel_arr[n];
		populateArr(n, bub_arr);
		copyArr(n, bub_arr, sel_arr);

		// Sort and calc times.
		bub_avg = calcBubble(n, bub_arr);
		bub_best = calcBubble(n, bub_arr);
		sel_avg = calcSelection(n, sel_arr);
		sel_best = calcSelection(n, sel_arr);

		// Print the results!
		printf("Results:\n");
		if (n > 50) 
		{
			printf("Bubble Sort! Size: %d, Avg.: %3f, Best: %f\n", n, bub_avg, bub_best);
			printf("Selection Sort! Size: %d, Avg.: %3f, Best: %f\n", n, sel_avg, sel_best);
		} 
		else 
		{
			printf("Bubble Sort! Size: %d, Avg.: %3f, Best: %f\n", n, bub_avg, bub_best);
			printArr(n, bub_arr);
			printf("Selection Sort! Size: %d, Avg.: %3f, Best: %f\n", n, sel_avg, sel_best);
			printArr(n, sel_arr);
		}
	}
}