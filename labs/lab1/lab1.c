/* implement the functions and start the program */
#include "lab1.h"

/* generate random sequence of characters n times and compute the frequency of
 * each charaters, then display the results 
 */

int random_char(int n)
{
	int freq[26];	/* frequency of each letter (lower case only) */

	int i, j;
	
	for (i = 0; i < 26; i++)
		freq[i] = 0; /* initialize the array */

	/* generate the random sequence n times in a loop */
	for (i = 0; i < n; i++)
	{
		j = rand() % 26;
		freq[j] += 1;
	}

	/* compute the max frequency */
	j = 0;
	for (i = 0; i < 26; i++)
	{
		if (freq[i] > j)
			j = freq[i];
	}

	/* display the results */
	printf("\nHere are the frequencies:\n");
	for (i = 0; i < 26; i++)
	{
		printf("%2c: %4d", 'a' + i, freq[i]);
		if((i + 1) % 5 == 0)
			printf("\n");
	}	
	printf("\n\n");

	printf("Here is the max frequency value:\n");
	for (i = 0; i < 26; i++)
	{
		if (freq[i] >= j)
			printf("%2c: %4d\n", 'a' + i, freq[i]);
	}
	printf("\n");

	return 0;
}


int coin_toss(int n)
{
	// placeholders
	int numHeads = 0;
	int numTails = 0;

	// simulate coin tosses
	for (int i = 0; i < n; i++)
	{
		int r= rand() % 2;
		if (r == 0) numHeads++;
		else numTails++;
	}

	return abs(numHeads - numTails);	
}
