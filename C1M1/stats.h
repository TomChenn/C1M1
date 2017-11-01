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
 * @file stats.h
 * @brief declarations for function.
 *
 * <Add Extended Description Here>
 *
 * @author Tom_Chen
 * @date 2017/11/1
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

  int find_mean(unsigned char array[], int size);
  void print_array(unsigned char array[], int size);
  void sort_array(unsigned char array[], int size);
  int find_minimum(unsigned char array[], int size);
  int find_maximum(unsigned char array[], int size);
  int find_median(unsigned char array[], int size);
  void print_statistics(unsigned char array[], int size);


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
