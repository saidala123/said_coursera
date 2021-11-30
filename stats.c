/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Alaa.file> 
 * @brief <code that handles statistics >
 *
 * <Add Extended Description Here>
 *
 * @author <Alaa Said>
 * @date <24/09/2021 >
 *
 */



#include <stdio.h>
#include "stats.h"
void print_array(unsigned char array1[],int SIZE);
int find_median(unsigned char array1[], int SIZE);
void print_stats( int min,int max,int mean,int median);
int find_mean(unsigned char array1[],int SIZE);
int find_maximum(unsigned char array1[],int SIZE);
int find_minimum(unsigned char array1[],int SIZE);
void sort(unsigned char array1[],int SIZE);

/* Size of the Data Set */
#define SIZE (40)
void main() {
   
  unsigned char array1[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
int min;
int max;
int mean;
int mead;
 	min=max=mead=mean=0;								
								
	printf("unsorted\n");
	print_array(array1,SIZE);
	sort(array1,SIZE);
	printf("sorted\n");
	print_array(array1,SIZE);
	printf("\n");
	max = find_maximum(array1,SIZE);
	min = find_minimum(array1,SIZE);
	mead  = find_median(array1,SIZE);
	mean   = find_mean(array1,SIZE);
	print_stats(min, max, mean, mead);
}

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	
	
/* Add other Implementation File Code Here */
