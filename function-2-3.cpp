#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

bool is_array_palindrome(int integers[], int length){
  
  bool is_pal = true;
  
  if (length <= 0){
    return is_pal = false;
  }
  
  for (int i=0; i<ceil(length/2); i++){
    if (integers[i] != integers[length-1-i]){
      return is_pal = false;
    }
  }
  
  return is_pal = true;
}

int palindrome_sum(int integers[], int length){
  
  if (length <= 0){
    return -1;
  }
  
  if (is_array_palindrome(integers, length) == false){
    return -2;
  }
  
  int sum = 0;
  
  for (int i=0; i<length; i++){
    sum = sum + integers[i];
  }
  
  return sum;
}

int sum_integers(int integers[], int length){
  
  if (length <= 0){
    return -1;
  }
  
  int sum = 0;
  
  for (int i=0; i<length; i++){
    sum = sum + integers[i];
  }
  
  return sum;
}
