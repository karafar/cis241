/*
Farid Karadsheh
CIS 241-04
Professor Xinli Wang
1/28/2019
*/
#ifndef HELPERS_H
#define HELPERS_H

#include "sorting.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populateArr( int n, int arr[] );
void copyArr( int n, int source_arr[], int copy_arr[] ); 
void printArr( int n, int arr[] );
double calcBubble( int n, int arr[] );
double calcSelection( int n, int arr[] );

#endif
