//
//  function-2-2.cpp
//  pracexam1
//
//  Created by Jordan Le on 12/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

int bin_to_int(int binary_digits[], int number_of_digits){
  
  int decimal = 0;
  int j=0;
  for (int i=number_of_digits-1; i>=0; i--){
    decimal = decimal + (binary_digits[i] * pow(2, j));
    j++;
  }
  
  return decimal;
}
