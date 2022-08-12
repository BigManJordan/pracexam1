//
//  function-2-2.cpp
//  pracexam1
//
//  Created by Jordan Le on 12/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits){
  
  int decimal = 0;
  
  for (int i=0; i<number_of_digits; i++){
    decimal = decimal + (binary_digits[i] * pow(2, i));
  }
  
  return decimal;
}
