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
 * @file stats.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Tom_Chen
 * @date 2017/11/1
 * test3
 */


#include <stdio.h>
#include "stats.h"

int find_mean(unsigned char array[], int size){
  float means;
  int k;
  means=0;

  for(k=0;k<40;k++){
    if(k<40){
      means=array[k]+means;
    }
  }
  means=means/k;
  return means;
}

int find_minimum(unsigned char array[], int size){
  int min,i;
  min=array[0];
  for(i=0;i<40;i++){
    if(min>array[i]){
      min=array[i];
    }
  }
  return min;

}


int find_maximum(unsigned char array[], int size){
  int max,j;
  max=array[0];
  for(j=0;j<40;j++){
    if(max<array[j]){
      max=array[j];
    }
  }
  return max;

}

void sort_array(unsigned char array[], int size){
  int i,j,t,c;
  for(int c=0;c<(size-1);c++){
    for(int j=0; j<size-c-1;j++){
      if(array[j]>array[j+1]){
        t=array[j];
        array[j]=array[j+1];
        array[j+1]=t;
      }
    }
  }

//  for(i=0;i<size;i++){
//  printf("%d\n",array[i]);
//  }
}

int find_median(unsigned char array[], int size){
  int median=0;
  sort_array(array,size);
  
  if(size%2 ==1){
    median=array[(size/2)+1];
  }
  else{
    median=0.5*(array[(size/2)-1] + array[size/2]);
  }
  
  return median;
}


/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  


  /* Other Variable Declarations Go Here */






  /* Statistics and Printing Functions Go Here */

    printf("Means:%d\n",find_mean(test,SIZE));
    printf("Min:%d\n",find_minimum(test,SIZE));
    printf("Max:%d\n",find_maximum(test,SIZE));
    printf("Median:%d\n",find_median(test,SIZE));


}

/* Add other Implementation File Code Here */

