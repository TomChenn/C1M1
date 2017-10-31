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
 * test3
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int k=0,j=0,i=0, min, max, median,q,w,t;
  float means;
  min=test[0];
  for(i=0;i<40;i++){
    if(min>test[i]){
      min=test[i];
    }
  }
  printf("Min:%d\n",min);

  max=test[0];
  for(j=0;j<40;j++){
    if(max<test[j]){
      max=test[j];
    }
  }
  printf("Max:%d\n",max);

  means=0;
  for(k=0;k<40;k++){
    if(k<40){
      means=test[k]+means;
    }
  }
  means=means/k;
  printf("Means:%f\n",means);

  for(q=38;q>=0;q--){
    for(w=0;w<=q;w++){
      if(test[w]>test[w+1]){
        t=test[w];
        test[w]=test[w+1];
        test[w+1]=t;
      }
    }
  }
  for(i=0;i<40;i++){
  printf("%d\n,",test[i]);
  }
  
  if(i%2==0){
    median=i/2;
    printf("%d\n",test[median]);
  }

  /* Statistics and Printing Functions Go Here */

  
}

/* Add other Implementation File Code Here */

