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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_stats( int min,int max,int mean,int median){
		printf("the array min %d the array max %d the array mean %d the array median %d\n",min,max,mean,median);
	}
	void print_array(unsigned char array1[],int SIZE){
		int x;
		for(x =0;x<SIZE;x++){
			printf("%d\n",array1[x]);}
	}
	int find_median(unsigned char array1[], int SIZE){
		int median=0;
    if(SIZE %2 == 0)
        median = (array1[(SIZE-1)/2] + array1[SIZE/2])/2.0;
    else
        median = array1[SIZE/2];
    
    return median;
	}
	int find_mean(unsigned char array1[],int SIZE){
		int sum;
		int mean;		
		int z;
		sum = mean =0;
	for (z=0;z<SIZE;z++){
		sum=sum + array1[z];
	}
		mean= sum /z;
	return mean;
	}
	int find_maximum(unsigned char array1[],int SIZE){
	    int i;
    int max = array1[0];
    for (i = 1; i < SIZE; i++)
        if (array1[i] > max)
            max = array1[i];
    return max;
	}	
		int find_minimum(unsigned char array1[],int SIZE){
	    int e;
	    int min;
    for (e = 0; e < SIZE; e++)
        if (array1[e] < min)
            min = array1[e];
    return min;
	}
	void sort(unsigned char array1[],int SIZE){
	for (int y = 0; y < SIZE; ++y){
            for (int j = y + 1; j < SIZE; ++j){
 
                if (array1[y] < array1[j]){
					int a = array1[y];
                    array1[y] = array1[j];
				array1[j] = a;
				}
            }
    }
	}

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here> 
 */


#endif /* __STATS_H__ */
